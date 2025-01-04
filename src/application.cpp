#include "application.h"
#include <iostream>

retro_game::Screen::Screen () {}
retro_game::Screen::~Screen () {}
retro_game::Screen::Screen (uint16_t width, uint16_t height) {
    m_screenWidth = width;
    m_screenHeight = height;

    m_pixels = std::vector<uint32_t> (0);
    m_pixels.resize (m_screenWidth * m_screenHeight);

    clearPixels();
}

void retro_game::Screen::clearPixels ()
{
    for (uint32_t& pixel : m_pixels) {
        pixel = 0x00;
    }
}

void retro_game::Screen::setPixel (uint32_t x, uint32_t y, uint32_t color) {
    std::cout << "( " << x << ", " << y <<" )" << std::endl;
    m_pixels[(y * m_screenWidth) + x] = color;
}

uint32_t retro_game::Screen::getPixel (uint32_t x, uint32_t y) {
    return m_pixels[(x * m_pixels.size()) + y];
}

retro_game::Application::Application () {}

retro_game::Application::~Application ()
{
    SDL_DestroyTexture (m_texture);
    SDL_DestroyRenderer (m_renderer);
    SDL_DestroyWindow (m_window);
}

retro_game::Application::Application (std::string title, uint16_t width, uint16_t height) 
{
    m_title = title;
    m_windowWidth = width;
    m_windowHeight = height;

    m_quit = false;

    initSDL();
}

void retro_game::Application::initSDL () {
    int sdlInit = SDL_Init(SDL_INIT_VIDEO);
    if (sdlInit > 0) {
        std::cout << "SDL failed to initalize: " << SDL_GetError() << std::endl;
    }

    m_window = SDL_CreateWindow (
        m_title.c_str(),
        SDL_WINDOWPOS_CENTERED_DISPLAY (0),
        SDL_WINDOWPOS_CENTERED_DISPLAY (0),
        m_windowWidth,
        m_windowHeight,
        SDL_WINDOW_ALLOW_HIGHDPI
    );

    if (m_window == NULL) {
        std::cout << "failed to create window: " << SDL_GetError() << std::endl;
    }

    m_renderer = SDL_CreateRenderer (m_window, -1, SDL_RENDERER_PRESENTVSYNC);

    if (m_renderer == NULL) {
        std::cout << "failed to create render: " << SDL_GetError() << std::endl;
    }

    m_screen = Screen (384, 216);

    m_texture = SDL_CreateTexture (
        m_renderer,
        SDL_PIXELFORMAT_ABGR8888,
        SDL_TEXTUREACCESS_STREAMING,
        m_screen.getScreenWidth(),
        m_screen.getScreenHeight()
    );

    run();
}

void retro_game::Application::run ()
{
    while (!m_quit) {
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    m_quit = true;
                    break;
            }
        }

        // update

        // render
        m_screen.clearPixels();

        for (int x = 0; x < 10; x++) {
            for (int y = 0; y < 10; y++) {
                m_screen.setPixel(x, y, 0xFF00FF);
            }
        }

        SDL_UpdateTexture(m_texture, NULL, m_screen.getPixels().data(), m_screen.getScreenWidth() * 4);
        SDL_RenderCopyEx (
            m_renderer,
            m_texture,
            NULL,
            NULL,
            0.0f,
            NULL,
            SDL_FLIP_VERTICAL
        );

        SDL_RenderPresent(m_renderer);
    }
}
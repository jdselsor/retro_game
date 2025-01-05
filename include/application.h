#ifndef RETROGAME_APPLICATION_H
#define RETROGAME_APPLICATION_H

#include <cstdint>
#include <vector>
#include <string>

#include <SDL2/SDL.h>

#include "graphics.h"

namespace retro_game {
    class Screen {
        public:
            Screen ();
            Screen (uint16_t, uint16_t);
            ~Screen();

            void clearPixels ();
            void setPixel (uint32_t, uint32_t, uint32_t);
            uint32_t getPixel (uint32_t, uint32_t);

            void fillRect (uint32_t, uint32_t, uint32_t, uint32_t, retro_game::Color);

            inline uint16_t getScreenWidth () const { return m_screenWidth; }
            inline uint16_t getScreenHeight () const { return m_screenHeight; }
            inline std::vector<uint32_t> getPixels () const { return m_pixels; }
        
        private:
            uint16_t m_screenWidth;
            uint16_t m_screenHeight;

            std::vector<uint32_t> m_pixels;
    };

    class Application {
        public:
            Application ();
            Application (std::string, uint16_t, uint16_t);
            ~Application ();

            void launch ();

            inline Screen getScreen () const { return m_screen; }

        private:
            std::string m_title;
            uint16_t m_windowWidth;
            uint16_t m_windowHeight;

            SDL_Window* m_window;
            SDL_Texture* m_texture;
            Screen m_screen;
            SDL_Renderer* m_renderer;

            bool m_quit;

            void initSDL ();
            //void run ();
    };
}

#endif
#ifndef RETROGAME_GRAPHICS_H
#define RETROGAME_GRAPHICS_H

#include <unordered_map>
#include <string>
#include <cstdint>
#include <vector>

namespace retro_game {
    enum Color {
        BLACK       = 0x000000,
        DARK_GREY   = 0x626262,
        GREY        = 0x898989,
        LIGHT_GREY  = 0xadadad,
        WHITE       = 0xffffff,
        RED         = 0x444e9f,
        LIGHT_RED   = 0x757ecb,
        BROWN       = 0x12546d,
        ORANGE      = 0x3c68a1,
        YELLOW      = 0x87d4c9,
        LIGHT_GREEN = 0x9be29a,
        GREEN       = 0x5eab5c,
        CYAN        = 0xc6bf6a,
        LIGHT_BLUE  = 0xcb7e88,
        BLUE        = 0x9b4550,
        PURPLE      = 0xa357a0
    };

    class Image {
        public:
            Image ();
            Image (uint32_t, uint32_t, uint32_t);
            Image (std::string);
            ~Image ();

            void setTransparentColor (uint32_t val) { m_transparentColor = val; }
            uint32_t getWidth () const { return m_width; }
            uint32_t getHeight () const { return m_height; }
            uint32_t getTransparentColor () const { return m_transparentColor; }
            std::vector<uint32_t> getData () const { return m_data; }
        private:
            uint32_t m_width;
            uint32_t m_height;
            uint32_t m_transparentColor;

            std::vector<uint32_t> m_data;
    };

    inline uint8_t getRedComponentRGB (uint32_t color) { return (color >> 16) & 0xff; }
    inline uint8_t getGreenComponentRGB (uint32_t color) { return (color >> 8) & 0xff; } 
    inline uint8_t getBlueComponentRGB (uint32_t color) { return (color) & 0xff; }
    
    inline uint32_t composeColor (uint8_t c0, uint8_t c1, uint8_t c2) { return (c0 << 16 | c1 << 8 | c2); }
}

#endif
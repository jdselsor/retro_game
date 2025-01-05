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
}

#endif
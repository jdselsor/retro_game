#include "graphics.h"

retro_game::Image::Image () {
    m_width = 0;
    m_height = 0;
    m_transparentColor = 0x00;
    m_data = std::vector<uint32_t>();
}

retro_game::Image::Image (uint32_t width, uint32_t height, uint32_t transparentColor) {
    m_width = width;
    m_height = height;
    m_transparentColor = transparentColor;

    m_data = std::vector<uint32_t> (m_width * m_height, m_transparentColor);
}
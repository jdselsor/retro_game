#include <iostream>
#include <algorithm>

#include <SDL2/SDL.h>

#include "application.h"

int main() {
    retro_game::Application app ("Game", 1280, 720);
    app.launch();
    return 0;
}

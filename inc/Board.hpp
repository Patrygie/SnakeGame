#pragma once

#include "Window.hpp"

// Board resolution width x high
#define WIDTH 60
#define HEIGTH 50

// Board high left corner width x high
#define CORNER_X 4
#define CORNER_Y 4

class Board : public Window
{
private:
    int _width;
    int _heigth;

public:
    Board() : _width(WIDTH), _heigth(HEIGTH) {}

public:
    void print_boarders();
    int get_width() const;
    int get_heigth() const;
};

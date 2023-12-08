#pragma once
#include "Window.hpp"

class Board : public Window
{
private:
    int width;
    int heigth;

public:
    Board(int w, int h) : width(w), heigth(h){}

public:
    void print_boarders();
    int const get_width();
    int const get_heigth();
};

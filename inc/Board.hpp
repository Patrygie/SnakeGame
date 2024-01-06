#pragma once
#include "Window.hpp"

class Board : public Window
{
private:
    int _width;
    int _heigth;

public:
    Board(int w, int h) : _width(w), _heigth(h) {}

public:
    void print_boarders();
    int get_width() const;
    int get_heigth() const;
};

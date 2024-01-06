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
    int get_width() const;
    int get_heigth() const;
};

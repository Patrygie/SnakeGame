#pragma once

#include "Window.hpp"

class Snake
{
private:
    int x_h;
    int y_h;

public:
    Snake(int width, int heigth) : x_h(width/2), y_h(heigth/2){}

public:
    void print();
    void clear();
};
#pragma once

#include <ncurses.h>
#include <unistd.h>

class SnakePart
{
// public:
private:
    int x_prev;
    int y_prev;
    int x_next;
    int y_next;

public:
    // SnakePart(int width, int heigth) : x(width/2), y(heigth/2){}

public:
    void print(int dt_x, int dt_y);
    void clear(int dt_x, int dt_y);
    // void clear();
};
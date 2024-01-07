#pragma once 

#include <ncurses.h>
#include <random>
#include <ctime>

#include "Board.hpp"

class Snack
{
private:
    int _x;
    int _y;
    int _area_w;
    int _area_h;
    const char *_s;

public:
    Snack(const char *s);

public:
    void spawn();
    int get_x() const;
    int get_y() const;
};
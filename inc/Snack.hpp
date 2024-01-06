#pragma once 

#include <ncurses.h>
#include <random>
#include <ctime>

class Snack
{
private:
    int _x;
    int _y;
    int _boarder_w;
    int _boarder_h;
    const char* _s;
    
public:
    Snack(int width, int heigth, const char* s);

public:
    void spawn();
    int get_x() const;
    int get_y() const;
};
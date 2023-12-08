
#include "../inc/Snake.hpp"

void Snake::print()
{
    for(int i = 0; i < 5; ++i)
    {
        move(y_h+i, x_h+i);
        printw("O");
        usleep(100000);
        printw(" ");
        refresh();
    }
}

void Snake::clear()
{
    for(int i = 0; i < 5; ++i)
    {
        move(y_h+i, x_h+i);
        printw(" ");
        refresh();
    }
}
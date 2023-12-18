
#include "../inc/Snake.hpp"

void Snake::print_rel(int dt_x, int dt_y)
{
    x_prev = x_next;
    y_prev = y_next;

    x_next += dt_x;
    y_next += dt_y;

    move(y_next, x_next);
    printw("O");
    usleep(100000);
    refresh();
}

void Snake::print_raw(int x, int y)
{
    move(y, x);
    printw("o");
    refresh();

    x_prev = x;
    y_prev = y;
}

void Snake::clear()
{
    move(y_prev, x_prev);
    printw(" ");
    refresh();
}

void Snake::push_back()
{
    
}
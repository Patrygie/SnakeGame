
#include "../inc/Snake.hpp"

void SnakePart::print(int dt_x, int dt_y)
// void SnakePart::print(int x, int y)
{
    // x_prev = x_next;
    // y_prev = y_next;

    x_next += dt_x;
    y_next += dt_y;
    move(y_next, x_next);
    printw("O");
    usleep(100000);
    refresh();
}

void SnakePart::clear(int dt_x, int dt_y)
// void SnakePart::clear()
{
    move(y_next + dt_y, x_next + dt_x);
    // move(y_prev, x_prev);
    printw(" ");
    refresh();
}
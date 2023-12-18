#pragma once

#include <ncurses.h>
#include <unistd.h>
#include <vector>
#include <string>

class Snake
{
// private:
//     typedef struct
//     {
//         int x_prev;
//         int y_prev;
//         int x_next;
//         int y_next;
//         std::string sign;
//     }Body;

public:
// private:
    int x_prev;
    int y_prev;
    int x_next;
    int y_next;

    // std::vector<Body> b;

public:
    Snake(int x, int y) : x_prev(x), y_prev(y), x_next(0), y_next(0)
    {
        this->print_rel(x, y);
    }

public:
    void print_rel(int dt_x, int dt_y);
    void print_raw(int x, int y);
    void clear();

public:
    void push_back();
};
#pragma once

#include <ncurses.h>
#include <unistd.h>
#include <vector>
#include <algorithm>

#include "Board.hpp"

class Snake
{
private:
    typedef struct
    {
        int x_prev;
        int y_prev;
        int x_next;
        int y_next;
        const char* sign;
    }SnakeSegment;

    std::vector<SnakeSegment> _s;
    
public:
    Snake();

private:
    void print_rel_head(int dt_x, int dt_y);
    void print_ruth_segments();

public:
    void clear();
    void push_back();
    void go_up();
    void go_down();
    void go_left();
    void go_right();
    int get_head_x() const;
    int get_head_y() const;
    bool is_self_collision();
    bool is_wall_collision();
};
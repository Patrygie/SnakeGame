#pragma once

#include <ncurses.h>
#include <unistd.h>
#include <vector>

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
    Snake(int x, int y)
    {
        SnakeSegment* head = new SnakeSegment{};
        head->x_prev = x;
        head->y_prev = y;
        head->x_next = 0;
        head->y_next = 0;
        head->sign = "O";
        _s.push_back(*head);
        print_rel_head(head->x_prev, head->y_prev);
    }

private:
    void print_rel_head(int dt_x, int dt_y);
    void print_segments();

public:
    void clear();
    void push_back();
    void go_up();
    void go_down();
    void go_left();
    void go_right();
    int get_head_x() const;
    int get_head_y() const;
};
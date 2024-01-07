
#include "../inc/Snake.hpp"

Snake::Snake()
{
    SnakeSegment *head = new SnakeSegment{};
    head->x_prev = WIDTH / 2 + CORNER_X;
    head->y_prev = HEIGTH / 2 + CORNER_Y;
    head->x_next = 0;
    head->y_next = 0;
    head->sign = "O";
    _s.push_back(*head);
    print_rel_head(head->x_prev, head->y_prev);
}

void Snake::print_rel_head(int dt_x, int dt_y)
{
    _s[0].x_prev = _s[0].x_next;
    _s[0].y_prev = _s[0].y_next;

    _s[0].x_next += dt_x;
    _s[0].y_next += dt_y;

    move(_s[0].y_next, _s[0].x_next);
    printw(_s[0].sign);
    usleep(100000);
    refresh();
}

void Snake::print_ruth_segments()
{
    for (int i = 1; i < _s.size(); ++i)
    {
        _s[i].x_prev = _s[i].x_next;
        _s[i].y_prev = _s[i].y_next;

        _s[i].x_next = _s[i - 1].x_prev;
        _s[i].y_next = _s[i - 1].y_prev;

        move(_s[i].y_next, _s[i].x_next);
        printw(_s[i].sign);
        refresh();
    }
}

void Snake::clear()
{
    move(_s.back().y_prev, _s.back().x_prev);
    printw(" ");
    refresh();
}

void Snake::push_back()
{
    SnakeSegment *segment = new SnakeSegment{};
    segment->sign = "o";
    segment->x_next = _s.back().x_prev;
    segment->y_next = _s.back().y_prev;
    segment->x_prev = _s.back().x_prev;
    segment->y_prev = _s.back().y_prev;
    _s.push_back(*segment);
}

void Snake::go_up()
{
    print_rel_head(0, -1);
    print_ruth_segments();
}

void Snake::go_down()
{
    print_rel_head(0, 1);
    print_ruth_segments();
}

void Snake::go_left()
{
    print_rel_head(-1, 0);
    print_ruth_segments();
}

void Snake::go_right()
{
    print_rel_head(1, 0);
    print_ruth_segments();
}

int Snake::get_head_x() const
{
    return _s.front().x_next;
}

int Snake::get_head_y() const
{
    return _s.front().y_next;
}

bool Snake::is_self_collision()
{
    return std::any_of(_s.begin() + 1, _s.end(), [&](SnakeSegment i)
                       { return (_s[0].x_next == i.x_next) and (_s[0].y_next == i.y_next); });
}

bool Snake::is_wall_collision()
{
    return (get_head_x() == WIDTH + CORNER_X + 1 - 2 
            or get_head_x() == CORNER_X 
            or get_head_y() == HEIGTH + CORNER_Y + 1 - 2
            or get_head_y() == CORNER_Y);
}
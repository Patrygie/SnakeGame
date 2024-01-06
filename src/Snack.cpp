
#include "../inc/Snack.hpp"

Snack::Snack(int width, int height, const char *s) 
    : _s(s), _boarder_w(width), _boarder_h(height)
{
    srand(time(nullptr));
}

void Snack::spawn()
{
    _x = std::rand() % _boarder_w + 2;
    _y = std::rand() % _boarder_h + 2;

    move(_y, _x);
    printw(_s);
    refresh();
}

int Snack::get_x() const
{
    return _x;
}

int Snack::get_y() const
{
    return _y;
}
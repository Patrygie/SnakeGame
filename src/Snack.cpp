
#include "../inc/Snack.hpp"

Snack::Snack(const char *s) : _s(s)
{
    _area_w = WIDTH - 2;
    _area_h = HEIGTH - 2;
    srand(time(nullptr));
}

void Snack::spawn()
{
    _x = std::rand() % _area_w + 1 + CORNER_X;
    _y = std::rand() % _area_h + 1 + CORNER_Y;

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
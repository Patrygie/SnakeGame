
#include "../inc/Snack.hpp"

Snack::Snack(int width, int height, const char *s)
    : _s(s)
{
    _boarder_w = width - 2;
    _boarder_h = height - 2;
    srand(time(nullptr));
}

void Snack::spawn()
{
    _x = std::rand() % _boarder_w + 3;
    _y = std::rand() % _boarder_h + 3;

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
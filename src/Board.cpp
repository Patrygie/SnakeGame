#include "../inc/Board.hpp"

void Board::print_boarders()
{
    curs_set(0); // Cursor invisible
    refresh();
    win = newwin(heigth, width, 2, 2);
    box(win, 0, 0);
    wrefresh(win);
}

int Board::get_width() const
{
    return width;
}

int Board::get_heigth() const
{
    return heigth;
}
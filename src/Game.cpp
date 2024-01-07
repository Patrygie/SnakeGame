
#include "../inc/Game.hpp"

void Game::give_point()
{
    ++_score;
}

int Game::get_score() const
{
    return _score;
}

void Game::print_score()
{
    move(CORNER_Y, WIDTH / 2 + CORNER_X - 3);
    printw(" SCORE ");
    refresh();
}

void Game::print_end()
{
    move(HEIGTH / 2 + CORNER_Y, WIDTH / 2 + CORNER_X - 3);
    printw("FINISH");
    refresh();
}
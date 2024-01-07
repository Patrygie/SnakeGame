
#include "../inc/Game.hpp"

void Game::give_point()
{
    ++_score;
}

int Game::get_score() const
{
    return _score;
}

void Game::print_start()
{
    move(HEIGTH / 4 + CORNER_Y, WIDTH / 2 + CORNER_X - 10);
    printw("Use move key to START");
    refresh();
}

void Game::print_score()
{
    move(CORNER_Y, WIDTH / 2 + CORNER_X - 4);
    char buffer[12];
    sprintf(buffer, " SCORE: %d ", get_score());

    printw(buffer);

    refresh();
}

void Game::print_end()
{
    move(HEIGTH / 2 + CORNER_Y, WIDTH / 2 + CORNER_X - 3);
    printw("FINISH");
    refresh();
}

void Game::set_game_started()
{
    _is_started = true;
    move(HEIGTH / 4 + CORNER_Y, WIDTH / 2 + CORNER_X - 10);
    // printw("Use move key to START");
    printw("                     ");
    refresh();
}
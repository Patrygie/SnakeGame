
#include "../inc/Window.hpp"

void Window::init_window()
{
    initscr();
}

void Window::exit_window()
{
    getch();
    endwin();
}

void Window::invalidate()
{
    wrefresh(win);
}
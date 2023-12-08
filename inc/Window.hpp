#pragma once
#include <ncurses.h>
#include <unistd.h>

class Window
{
protected:
    WINDOW *win;
public:
    void init_window();
    void exit_window();
    void invalidate();
};

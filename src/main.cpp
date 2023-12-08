
#include <iostream>

#include <thread>
#include <chrono>

using namespace std::chrono_literals;

char keyInput;
#include "../inc/ThreadKeyboard.hpp"
#include "../inc/ThreadScreen.hpp"

int main()
{
    std::thread CaptureKeys(th_keyboard);
    std::thread PrintGame(th_screen);
    
    CaptureKeys.join();
    PrintGame.join();


    // initscr();

    // // moving cursor, x = 20, y = 10
    // move(10, 20);

    // printw("I am here...");

    // move(21, 10);
    // printw("Now i am here");

    // refresh();
    // getch();
    // endwin();




    // initscr();
    // WINDOW *win = newwin(50, 130, 2, 2);
    // curs_set(0); // cursor off
    // refresh();

    // making box border with default border styles
    // box(win, 0, 0);

    // for(int i = 10; i < 50; ++i)
    // {
    //     mvwprintw(win, i, i, "O");
    //     wrefresh(win);
    //     usleep(100000);
    //     mvwprintw(win, i, i, " ");
    //     if(getchar())
    //     {

    //     }

    //     if(i == 49) i = 10;
    // }
    
    


    return 0;
}

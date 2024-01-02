
#include "../inc/app.hpp"

void th_screen()
{
    Window W;
    W.init_window();
    
    Board board(100, 50);
	board.print_boarders();

    Snake snake(50, 25);
    for(int i = 0; i < 40; ++i)
    {
        snake.push_back();
    }

    while(true)
    {
        snake.clear();
     
        if(keyInput == 'A')
        {
            snake.go_up();

        }
        else if(keyInput == 'B')
        {
            snake.go_down();
        }
        else if(keyInput == 'C')
        {
            snake.go_right();
        }
        else if(keyInput == 'D')
        {
            snake.go_left();
        }
        else if(keyInput == 'q')
        {
            break;
        }
    }
    
    move(25, 50);
    printw("FINISH");
    refresh();
    
    W.exit_window();
}

void th_keyboard()
{
    while(keyInput != 'q')
    {
        system("stty raw");
        keyInput = getchar();
        system("stty cooked"); 
    }
}

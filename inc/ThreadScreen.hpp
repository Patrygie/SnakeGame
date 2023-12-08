
#include "../inc/Window.hpp"
#include "../inc/Board.hpp"
#include "../inc/Snake.hpp"

void th_screen()
{
    Window W;
    W.init_window();
    
    Board board(100, 50);
	board.print_boarders();

    Snake snake(board.get_width(), board.get_heigth());
    snake.print();

    while(true)
    {
        // std::this_thread::sleep_for(500ms);
        if(keyInput == 'q') break;
    }

    snake.clear();

    move(25, 50);
    printw("FINISH");
    refresh();
    
    W.exit_window();
}

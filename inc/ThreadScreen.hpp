
#include "../inc/Window.hpp"
#include "../inc/Board.hpp"
#include "../inc/Snake.hpp"

#include <vector>

void th_screen()
{
    Window W;
    W.init_window();
    
    Board board(100, 50);
	board.print_boarders();

    std::vector<SnakePart> Snake{};
    SnakePart head(50, 25);
    Snake.push_back(head);

    SnakePart p1(head.x_prev, head.y_prev);
    Snake.push_back(p1);
    SnakePart p2(p1.x_prev, p1.y_prev);
    Snake.push_back(p1);
    
    while(true)
    {
        // p1.clear();
        p2.clear();
        if(keyInput == 'A')
        {
            p2.print_ruthless(p1.x_prev, p1.y_prev);
            p1.print_ruthless(head.x_prev, head.y_prev);
            head.print(0, -1);
        }
        else if(keyInput == 'B')
        {
            p2.print_ruthless(p1.x_prev, p1.y_prev);
            p1.print_ruthless(head.x_prev, head.y_prev);
            head.print(0, 1);
        }
        else if(keyInput == 'C')
        {
            p2.print_ruthless(p1.x_prev, p1.y_prev);
            p1.print_ruthless(head.x_prev, head.y_prev);
            head.print(1, 0);
        }
        else if(keyInput == 'D')
        {
            p2.print_ruthless(p1.x_prev, p1.y_prev);
            p1.print_ruthless(head.x_prev, head.y_prev);
            head.print(-1, 0);
        }
        else if(keyInput == 'q')
        {
            break;
        }
    }
        // std::this_thread::sleep_for(500ms);

    move(25, 50);
    printw("FINISH");
    refresh();
    
    W.exit_window();
}

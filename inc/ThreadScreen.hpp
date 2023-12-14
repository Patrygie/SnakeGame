
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
    SnakePart head;
    head.print(50, 25);
    Snake.push_back(head);

    // SnakePart p1;
    // p1.print(head.x_prev, head.y_prev);


    while(true)
    {
        if(keyInput == 'A')
        {
            // head.y_next -= 1; /*ogarnąć z rysowaniem w konkretnej lokalizacji,
            // kolejne segmenty korzystają z wartości prev poprzedniego segmentu*/
            head.print(0, -1);
            head.clear(0, 1);
            // head.clear();
        }
        else if(keyInput == 'B')
        {
            head.print(0, 1);
            head.clear(0, -1);
            // head.clear();
        }
        else if(keyInput == 'C')
        {
            head.print(1, 0);
            head.clear(-1, 0);
            // head.clear();
        }
        else if(keyInput == 'D')
        {
            head.print(-1, 0);
            head.clear(1, 0);
            // head.clear();
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


#include "../inc/app.hpp"

void th_screen()
{
    Window W;
    W.init_window();
    
    Board board(100, 50);
	board.print_boarders();

    Snake head(50, 25);

    Snake p1(head.x_prev, head.y_prev);

    Snake p2(p1.x_prev, p1.y_prev);
    
    while(true)
    {
        // p1.clear();
        p2.clear();
        if(keyInput == 'A')
        {
            p2.print_raw(p1.x_prev, p1.y_prev);
            p1.print_raw(head.x_prev, head.y_prev);
            head.print_rel(0, -1);
        }
        else if(keyInput == 'B')
        {
            p2.print_raw(p1.x_prev, p1.y_prev);
            p1.print_raw(head.x_prev, head.y_prev);
            head.print_rel(0, 1);
        }
        else if(keyInput == 'C')
        {
            p2.print_raw(p1.x_prev, p1.y_prev);
            p1.print_raw(head.x_prev, head.y_prev);
            head.print_rel(1, 0);
        }
        else if(keyInput == 'D')
        {
            p2.print_raw(p1.x_prev, p1.y_prev);
            p1.print_raw(head.x_prev, head.y_prev);
            head.print_rel(-1, 0);
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

void th_keyboard()
{
    while(keyInput != 'q')
    {
        system("stty raw");
        keyInput = getchar();
        system("stty cooked"); 
    }
}

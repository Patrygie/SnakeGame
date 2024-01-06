
#include "../inc/app.hpp"

void th_screen()
{
    Window W;
    W.init_window();

    Board board(100, 50);
    board.print_boarders();

    Snack snack(board.get_width(), board.get_heigth(), "$");
    snack.spawn();

    Snake snake(50, 25);

    while (true)
    {
        snake.clear();

        switch (dir)
        {
        case UP:
            snake.go_up();
            dir_before = UP;
            break;
        case DOWN:
            snake.go_down();
            dir_before = DOWN;
            break;
        case RIGHT:
            snake.go_right();
            dir_before = RIGHT;
            break;
        case LEFT:
            snake.go_left();
            dir_before = LEFT;
            break;
        }

        if (snack.get_x() == snake.get_head_x() and snack.get_y() == snake.get_head_y())
        {
            snake.push_back();
            snack.spawn();
        }

        if (dir == QUIT or snake.is_collision())
        {
            dir = QUIT;
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
    while(dir != QUIT)
    {
        system("stty raw");
        key = getchar();

        if (key == UP and dir_before != DOWN)
        {
            dir = key;
        }
        else if (key == DOWN and dir_before != UP)
        {
            dir = key;
        }
        else if (key == LEFT and dir_before != RIGHT)
        {
            dir = key;
        }
        else if (key == RIGHT and dir_before != LEFT)
        {
            dir = key;
        }
        else if (key == QUIT)
        {
            dir = key;
        }
        else{}
        system("stty cooked"); 
    }
}

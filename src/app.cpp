
#include "../inc/app.hpp"

void th_screen()
{
    Window W;
    W.init_window();

    Board board;
    board.print_boarders();

    Snack snack("$");
    snack.spawn();

    Snake snake;

    Game game;

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
            game.give_point();
            snack.spawn();
        }

        if (dir == QUIT or snake.is_self_collision() or snake.is_wall_collision())
        {
            dir = QUIT;
            snake.clear();
            break;
        }
    }

    game.print_end();
    game.print_score();

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

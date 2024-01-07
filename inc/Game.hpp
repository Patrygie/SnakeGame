
#include "Board.hpp"
#include "Snake.hpp"

class Game
{
    int _score;
    bool _is_started {false};

public:
    explicit operator bool() const
    {
        return _is_started;
    }

public:
    void give_point(); 
    int get_score() const;
    void print_start();
    void print_score();
    void print_end();
    void set_game_started();
};
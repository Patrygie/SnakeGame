
#include "Board.hpp"
#include "Snake.hpp"

class Game
{
    int _score;

public:
    void give_point(); 
    int get_score() const;
    void print_score();
    void print_end();
};
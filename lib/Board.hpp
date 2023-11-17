
#include <iostream>

class Board
{
private:
    int sideA;

public:
    Board(int size) : sideA(size){}

public:
    constexpr void print_boarders()
    {
        for(int height = 0; height < sideA; ++height)
        {
            if(height == 0 or height == sideA-1)
            {
                for(int width = 0; width < sideA; ++width)
                {
                    std::cout << "x ";
                }
                std::cout << '\n';
            }
            else
            {
                for(int width = 0; width < sideA+1; ++width)
                {
                    if(width ==  0 or width == sideA)
                    {
                        std::cout << "x";
                    }
                    else
                    {
                        std::cout << "  ";
                    }
                }
                std::cout << '\n';
            }
        }
    }
};

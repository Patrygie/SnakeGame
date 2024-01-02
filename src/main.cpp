
#include <iostream>

#include <thread>
#include <chrono>

using namespace std::chrono_literals;

#include "../inc/app.hpp"

int main()
{
    std::thread CaptureKeys(th_keyboard);
    std::thread PrintGame(th_screen);
    
    CaptureKeys.join();
    PrintGame.join();
    
    // std::vector<int> x{};

    // int * a;// = new int{4};

    // for(int i = 0; i < 3; ++i)
    // {
    //     a = new int{i};
    //     x.push_back(*a);
    // }
    // std::cout << x[0] << '\n';
    // std::cout << x[1] << '\n';
    // std::cout << x[2] << '\n';
    // // x.pop_back();
    // std::cout << x.size() << '\n';
    
    // std::cout << *a << '\n';
;

    return 0;
}

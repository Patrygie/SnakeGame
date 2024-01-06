
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

    return 0;
}

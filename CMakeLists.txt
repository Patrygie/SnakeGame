cmake_minimum_required(VERSION 3.14)
project(Snake)
add_executable(${PROJECT_NAME} 
src/main.cpp 
src/app.cpp 
src/Board.cpp
src/Snack.cpp 
src/Window.cpp 
src/Snake.cpp
src/Game.cpp
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
target_link_libraries(Snake ${CURSES_LIBRARIES})

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(t1 tests/t1.cpp)
target_link_libraries(t1 GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(t1)

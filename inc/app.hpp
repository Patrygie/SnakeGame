#pragma once

#include <stdlib.h>

#include "Window.hpp"
#include "Board.hpp"
#include "Snake.hpp"
#include "Snack.hpp"
#include "Game.hpp"

#define UP 'A'
#define DOWN 'B'
#define RIGHT 'C'
#define LEFT 'D'
#define QUIT 'q'

static char dir;
static char dir_before;
static char key;

void th_screen();
void th_keyboard();
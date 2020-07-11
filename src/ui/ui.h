#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <ncurses.h>
#include <panel.h>

void widget(WINDOW* win, int row, int col, std::string variable);
void ui_run();

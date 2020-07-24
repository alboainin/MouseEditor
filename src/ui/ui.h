
#pragma once

#include <iostream>
#include <string>
#include <ncurses.h>
#include <panel.h>

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

struct Window
{
    unsigned int x;
    unsigned int y;
    unsigned int posX;
    unsigned int posY;
};

class Ui
{
public:
     Ui();
    ~Ui();
    void Run();
public:
    void widget(WINDOW* mainWin, int row, int col, std::string element);
        
private:
    WINDOW* m_Window;
};

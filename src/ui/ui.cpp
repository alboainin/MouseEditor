#include "ui.h"
#include <iostream>

#include <sys/ioctl.h>

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

Ui::Ui()
{
    struct winsize max;
    ioctl(0, TIOCGWINSZ, &max);
    terminal_y = max.ws_col;
    terminal_x = max.ws_row;
    initscr();
}

Ui::~Ui()
{
    endwin();
}

void Ui::Run()
{
 raw();
 refresh();
 
}


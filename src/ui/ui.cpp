#include "ui.h"
#include <iostream>

#include <sys/ioctl.h>

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
void widget(WINDOW* win, int row, int col, std::string variable)
{
mvwprintw(win,row,col,(variable.c_str()));
}

void ui_run()
{
struct winsize size;
ioctl(0, TIOCGWINSZ, &size);
int row = size.ws_row;
int col = size.ws_col;

std::cout << row << std::endl << col << std::endl;
initscr();
printw("Main Window");
WINDOW* subwindow = newwin(3,col,(row - 1),0);
start_color();
init_pair(1,COLOR_BLACK,COLOR_WHITE);
refresh();
box(subwindow,0,0);
widget(subwindow,0,0,"[Normal]");
widget(subwindow,0,20,__FILENAME__);

wbkgd(subwindow, COLOR_PAIR(1));
refresh();
wrefresh(subwindow);
getch();
delwin(subwindow);
endwin();
}

#include "term.h"
#include "cursor.h"

int init() {
    //std::cout << __VERSION << std::endl;
    //return true;
    
    system("tput smcup"); // Enter alternative screen mode
    system("clear");      // Clear Screen
    ShowCursor(false);    //Disable the Cursor
}

void terminate() {
    // Free memory on the heap
    // For now we will just wait for the input
    std::cin.get();
    ShowCursor(true);   
    system("clear");
    system("tput rmcup"); // Exit alternative screen

}

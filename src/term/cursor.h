#pragma once

#include "term.h"

bool ShowCursor(bool state)
{
    if(state)
    {
        std::cout << "\x1B[?25h";
    }

    else
    {
        std::cout << "\x1B[?25l";
    }
}

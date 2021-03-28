#include "game.h"

#include <iostream>

//the following line is necessary for the
//  GetConsoleWindow() function to work!
//it basically says that you are running this
//  program on Windows 2000 or higher


//it is important that the above line be typed
//  BEFORE <windows.h> is included
#include <windows.h>

using namespace std;

int main (void)
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r); //stores the console's current dimensions
    //MoveWindow(window_handle, x, y, width, height, redraw_window);
    Sleep(100);
    MoveWindow(console, 0, 0, 1280, 1024, TRUE);
    Game game;
}
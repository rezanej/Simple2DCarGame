//
// Created by rezan on 3/27/2021.
//

#include "game.h"

Game::Game()
{
   initScreen();
   initWindow();
   wrefresh(mainWindow);
   refresh();
   while (true)
   {
       wclear(mainWindow);
       box(mainWindow,0,3);
       car.showCar(mainWindow);
       wrefresh(mainWindow);
       refresh();
       car.input(mainWindow);
       if (getch()=='q')
           break;
   }
}
void Game::initScreen()
{
    initscr();
    nodelay(stdscr,true);
    noecho();
    curs_set(0);
    clear();
}
void Game::initWindow()
{
    mainWindow=newwin(windowHeight,windowWidth,windowStartRow,windowStartColumn);
    keypad(mainWindow,true);
    box(mainWindow,0,3);
    refresh();
    wrefresh(mainWindow);
    nodelay(mainWindow,true);

}
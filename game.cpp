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
   road.buildTrees();

   while (true)
   {
       wclear(mainWindow);
       box(mainWindow,0,3);
       road.showRoad(mainWindow,windowHeight,windowWidth);
       car.showCar(mainWindow);

       road.showTrees(mainWindow);
       wrefresh(mainWindow);
       refresh();
       if(car.input(mainWindow)==0)
           break;
   }
   endwin();
}
void Game::initScreen()
{
    initscr();
    nodelay(stdscr,true);
    noecho();
    curs_set(0);
    clear();
    start_color();
    init_pair(1,COLOR_BLACK,COLOR_YELLOW);
    init_pair(2,COLOR_BLACK,COLOR_RED);
    init_pair(3,COLOR_GREEN,COLOR_GREEN);
    init_pair(4,COLOR_WHITE,COLOR_WHITE);

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
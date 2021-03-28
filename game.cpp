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
    enemies.push_back(Car(5,40,6));
   while (true)
   {
       timeChanging();
       wclear(mainWindow);
       box(mainWindow,0,3);
       road.showRoad(mainWindow,windowHeight,windowWidth);
       road.showLines(mainWindow);
       car.showCar(mainWindow);
       for(Car s:enemies)
            s.showCar(mainWindow);
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
    init_pair(5,COLOR_BLUE,COLOR_BLUE);
    init_pair(6,COLOR_GREEN,COLOR_GREEN);
    init_pair(7,COLOR_CYAN,COLOR_CYAN);

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
void Game::timeChanging() {


    Sleep(50);

        road.moveLines();
        road.checkLines();
        timeChangeCount++;
        for(int i=0;i<enemies.size();i++)
            enemies[i].move(Direction::directionE::DOWN);
        wrefresh(mainWindow);
        if (timeChangeCount == 10) {
            road.buildTrees();
            road.buildLines();

            if (enemies[0].getLastPoint().getRow()>60) {
                enemies.erase(enemies.begin());
                enemies.push_back(Car(12,40,6));
            }
            timeChangeCount = 0;
        }
        road.moveTrees();
        road.checkTree();

}
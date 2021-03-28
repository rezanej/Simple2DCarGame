//
// Created by rezan on 3/27/2021.
//

#include "game.h"

Game::Game()
{
   initScreen();
   initWindow();
//   wrefresh(mainWindow);
//   refresh();
   road.buildTrees();
    enemies.push_back(Car(5,30,6));
    nodelay(stdscr,false);
    keypad(stdscr ,true);
//    wattron(stdscr,COLOR_PAIR(1));
//    mvwprintw(stdscr,20,30,"PRESS ANY BUTTON TO START");
//    wattroff(stdscr,COLOR_PAIR(1));
//    getch();
    nodelay(stdscr,true);
   while (true)
   {
       srand(time(0));
       if (!gameover)
       timeChanging();
       wclear(mainWindow);
       box(mainWindow,0,3);

       road.showRoad(mainWindow,windowHeight,windowWidth);
       road.showLines(mainWindow);
       car.showCar(mainWindow);

       for(Car s:enemies)
           s.showCar(mainWindow);
       road.showTrees(mainWindow);
       car.showSpeed(mainWindow);
       showScore();
       carAccident();
       wrefresh(mainWindow);
       refresh();
       if (!gameover) {
           if (car.input(mainWindow, sleepTime, gameover) == 0)
               break;
       }
       else{
           mvwprintw(mainWindow,30,45,"GAME OVER !! PRESS Q for QUIT");
           wrefresh(mainWindow);
           refresh();
           nodelay(stdscr,false);
           nodelay(mainWindow,false);
           int a=getch();
           if (a=='q')

               break;
       }
   }
   endwin();
}
void Game::initScreen()
{

    initscr();

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
    init_pair(8,COLOR_WHITE,COLOR_BLACK);

}
void Game::initWindow()
{
    mainWindow=newwin(windowHeight,windowWidth,windowStartRow,windowStartColumn);
    keypad(mainWindow,true);
    box(mainWindow,0,3);
    int y,x;
    getmaxyx(stdscr,y,x);
    nodelay(stdscr,true);
//    refresh();
//    wrefresh(mainWindow);
    nodelay(mainWindow,true);

}
void Game::timeChanging() {

    Sleep(sleepTime);

        road.moveLines();
        road.checkLines();
        timeChangeCount++;
        for(int i=0;i<enemies.size();i++)
            enemies[i].move(Direction::directionE::DOWN);
//        wrefresh(mainWindow);
        if (timeChangeCount == 10) {
            road.buildTrees();
            road.buildLines();
            enemyBuilder();
            score++;
            if (enemies[0].getLastPoint().getRow()>60) {
                enemies.erase(enemies.begin());

            }
            timeChangeCount = 0;
        }
        road.moveTrees();
        road.checkTree();

}
void Game::enemyBuilder()  {
    srand(time(0));
    int places[]={20,30,40,50,60,70,80,90 };
    if (enemies.size()<4)
    {
        enemies.push_back(Car(-10,places[randomInt(randomEngine)],randomInt2(randomEngine)));
    }

}
void Game::carAccident() {
    for (int i = 0; i <enemies.size() ; ++i) {
        if (enemies[i].getLastPoint().getRow()==car.getFirstPoint().getRow())
            if ((enemies[i].getLeftPoint().getColumn()<=car.getLeftPoint().getColumn() &&
            enemies[i].getRightPoint().getColumn()>=car.getLeftPoint().getColumn())
            || (enemies[i].getRightPoint().getColumn()>=car.getRightPoint().getColumn()
            && enemies[i].getLeftPoint().getColumn()<=car.getRightPoint().getColumn())
                )
            gameover= true;

        if (car.getRightPoint().getColumn()>windowWidth-20 ||car.getLeftPoint().getColumn()<20)
            gameover= true;
    }

}
void Game::showScore() {
    wattron(mainWindow,COLOR_PAIR(1));
    mvwprintw(mainWindow ,3,4,"SCORE:  %d",score);
    mvwprintw(mainWindow ,4,4,"PRESS Q for QUIT");

    wattroff(mainWindow,COLOR_PAIR(1));
}
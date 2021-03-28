//
// Created by rezan on 3/27/2021.
//

#include "car.h"
int Car::input(WINDOW* window,int &sleepTime,bool gameover)
{

    keypad(window,true);
    keypad(stdscr,true);
    int Input=getch();
    flushinp();
    switch (Input)
    {
        case KEY_LEFT: {

            move(Direction::directionE::LEFT);

            return 1;
        }
        case KEY_UP: {
            if (points[0].getRow()>30)
            move(Direction::directionE::UP);
            if (sleepTime>10) {
                sleepTime--;
                speed+=2;
            }
            return 1;
        }
        case KEY_DOWN: {
            if (points[71].getRow()<=47)
            move(Direction::directionE::DOWN);
            if (sleepTime<50) {
                sleepTime++;
                speed-=2;
            }
            return 1;
        }
        case KEY_RIGHT: {

            move(Direction::directionE::RIGHT);
            return 1;
        }
        case 'q':{
            return 0;
                }
        default:{
            return 1;
        }
    }

}
void Car::move(Direction::directionE Input) {

    switch (Input)
    {
        case Direction::directionE ::UP:
        {
            for (int i = 0; i <points.size() ; ++i) {
                points[i].setRow(points[i].getRow()-1);
            }

            break;
        }
        case Direction::directionE::DOWN:
        {
            for (int i = 0; i <points.size() ; ++i) {
                points[i].setRow(points[i].getRow()+1);
            }
            break;
        }
        case Direction::directionE::LEFT:
        {
            for (int i = 0; i <points.size() ; ++i) {
                points[i].setColumn(points[i].getColumn()-3);
            }
            break;
        }
        case Direction::directionE::RIGHT:
        {
            for (int i = 0; i <points.size() ; ++i) {
                points[i].setColumn(points[i].getColumn()+3);
            }
            break;
        }
    }
}
void Car::showCar(WINDOW* window)
{

    for (int i = 0; i < points.size(); ++i) {
        if (i==0 ||i==1||i==7||i==8)
        {
            wattron(window,COLOR_PAIR(1));
            mvwprintw(window,points[i].getRow(),points[i].getColumn(),"O");
            wattroff(window,COLOR_PAIR(1));
        }
        else if (i==71 ||i==70 ||i==63||i==64||i==69||i==65)
        {
            wattron(window,COLOR_PAIR(2));
            mvwprintw(window,points[i].getRow(),points[i].getColumn(),"O");
            wattroff(window,COLOR_PAIR(2));
        }else if (i==11 ||i==12 ||i==13||i==14||i==15
        ||i==24 ||i==20 ||i==21||i==22||i==23||
        i==56 ||i==60||i==59||i==58||i==57)
        {

            mvwprintw(window,points[i].getRow(),points[i].getColumn()," ");

        }
        else {
            wattron(window,COLOR_PAIR(color));
            mvwprintw(window, points[i].getRow(), points[i].getColumn(), "#");
            wattroff(window,COLOR_PAIR(color));
        }
    }
}
Car::Car(int y, int x ,int color) :x{x},y{y},color{color}{}
Point Car::getLastPoint() {
    return points[71];
}
Point Car::getFirstPoint() {
    return points[0];
}
Point Car::getRightPoint() {
    return points[8];
}
Point Car::getLeftPoint() {
    return points[0];
}
void Car::showSpeed(WINDOW * window) {
    wattron(window,COLOR_PAIR(1));
    mvwprintw(window ,2,4,"SPEED:  %d",speed);
    wattroff(window,COLOR_PAIR(1));
}
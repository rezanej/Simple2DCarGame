//
// Created by rezan on 3/27/2021.
//

#include "car.h"
int Car::input(WINDOW* window)
{

    keypad(window,true);
    keypad(stdscr,true);
    int Input=getch();

    switch (Input)
    {
        case KEY_LEFT: {
            move(Direction::directionE::LEFT);

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
//        case Direction::directionE ::UP:
//        {
//            for (int i = 0; i <points.size() ; ++i) {
//                points[i].setRow(points[i].getRow()-1);
//            }
//
//            break;
//        }
//        case Direction::directionE::DOWN:
//        {
//            for (int i = 0; i <points.size() ; ++i) {
//                points[i].setRow(points[i].getRow()+1);
//            }
//            break;
//        }
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
            wattron(window,COLOR_PAIR(4));
            mvwprintw(window, points[i].getRow(), points[i].getColumn(), "#");
            wattroff(window,COLOR_PAIR(4));
        }
    }
}

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
        if (i==0 ||i==1 ||i==7||i==8)
        {
            wattron(window,COLOR_PAIR(1));
            mvwprintw(window,points[i].getRow(),points[i].getColumn(),"O");
            wattroff(window,COLOR_PAIR(1));
        }
        else if (i==71 ||i==70 ||i==63||i==64)
        {
            wattron(window,COLOR_PAIR(2));
            mvwprintw(window,points[i].getRow(),points[i].getColumn(),"O");
            wattroff(window,COLOR_PAIR(2));
        }
        else
        mvwprintw(window,points[i].getRow(),points[i].getColumn(),"#");

    }
}

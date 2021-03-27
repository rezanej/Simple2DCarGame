//
// Created by rezan on 3/27/2021.
//

#include "car.h"
void Car::input(WINDOW* window)
{

    keypad(window,true);
    keypad(stdscr,true);
    int Input=getch();

    switch (Input)
    {
        case KEY_UP:
        {
            move(Direction::directionE::UP);
            mvwprintw(window,1,2,"sdffssfdf");

            break;
        }
        case KEY_DOWN:
        {
            move(Direction::directionE::DOWN);

            break;
        }
        case KEY_LEFT:
        {
            move(Direction::directionE::LEFT);

            break;
        }
        case KEY_RIGHT:
        {

            move(Direction::directionE::RIGHT);
            break;
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
                points[i].setColumn(points[i].getColumn()-1);
            }
            break;
        }
        case Direction::directionE::RIGHT:
        {
            for (int i = 0; i <points.size() ; ++i) {
                points[i].setColumn(points[i].getColumn()+1);
            }
            break;
        }
    }
}
void Car::showCar(WINDOW* window)
{
    for (int i = 0; i < points.size(); ++i) {
        mvwprintw(window,points[i].getRow(),points[i].getColumn(),"#");
    }
}

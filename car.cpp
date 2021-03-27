//
// Created by rezan on 3/27/2021.
//

#include "car.h"
void Car::input(WINDOW* window)
{
    nodelay(window, true);
    int Input=getch();
    switch (Input)
    {
        case KEY_UP:
        {
            move(Direction::directionE::UP);
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

            break;
        }
        case Direction::directionE::DOWN:
        {

            break;
        }
        case Direction::directionE::LEFT:
        {

            break;
        }
        case Direction::directionE::RIGHT:
        {

            break;
        }
    }
}
void Car::showCar()
{
    for (int i = 0; i < points.size(); ++i) {
        mvprintw(points[i].getRow(),points[i].getColumn(),"#");
    }
}
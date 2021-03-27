//
// Created by rezan on 3/27/2021.
//

#ifndef SIMPLE2DCARGAME_CAR_H
#define SIMPLE2DCARGAME_CAR_H
#include "point.h"
#include <vector>
#include "direction.h"
#include "curses.h"
class Car {
    std::vector<Point> points
    {
        Point(10,10),Point(10,11),Point(10,12),
        Point(11,10),Point(11,11),Point(11,12),
        Point(12,10),Point(12,11),Point(12,12),
        Point(13,10),Point(13,11),Point(13,12),
    };
public:
    Car();
    void move(Direction::directionE);
    void automove(Direction::directionE);
    void input(WINDOW*);
    void showCar();

};


#endif //SIMPLE2DCARGAME_CAR_H

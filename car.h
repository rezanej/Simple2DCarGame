//
// Created by rezan on 3/27/2021.
//

#ifndef SIMPLE2DCARGAME_CAR_H
#define SIMPLE2DCARGAME_CAR_H
#include "point.h"
#include <vector>
#include "direction.h"
#include "curses.h"
#include <windows.h>
class Car {
    int x=37,y=50;
    std::vector<Point> points
    {
        Point(y,x),Point(y,x+1),Point(y,x+2),Point(y,x+3),Point(y,x+4),Point(y,x+5),
        Point(y,x+6),Point(y,x+7),Point(y,x+8),



        Point(y+1,x),Point(y+1,x+1),Point(y+1,x+2),Point(y+1,x+3),Point(y+1,x+4),Point(y+1,x+5),
        Point(y+1,x+6),Point(y+1,x+7),Point(y+1,x+8),


        Point(y+2,x),Point(y+2,x+1),Point(y+2,x+2),Point(y+2,x+3),Point(y+2,x+4),Point(y+2,x+5),
        Point(y+2,x+6),Point(y+2,x+7),Point(y+2,x+8),


        Point(y+3,x),Point(y+3,x+1),Point(y+3,x+2),Point(y+3,x+3),Point(y+3,x+4),Point(y+3,x+5),
        Point(y+3,x+6),Point(y+3,x+7),Point(y+3,x+8),

        Point(y+4,x),Point(y+4,x+1),Point(y+4,x+2),Point(y+4,x+3),Point(y+4,x+4),Point(y+4,x+5),
        Point(y+4,x+6),Point(y+4,x+7),Point(y+4,x+8),


        Point(y+5,x),Point(y+5,x+1),Point(y+5,x+2),Point(y+5,x+3),Point(y+5,x+4),Point(y+5,x+5),
        Point(y+5,x+6),Point(y+5,x+7),Point(y+5,x+8),


        Point(y+6,x),Point(y+6,x+1),Point(y+6,x+2),Point(y+6,x+3),Point(y+6,x+4),Point(y+6,x+5),
        Point(y+6,x+6),Point(y+6,x+7),Point(y+6,x+8),


        Point(y+7,x),Point(y+7,x+1),Point(y+7,x+2),Point(y+7,x+3),Point(y+7,x+4),Point(y+7,x+5),
        Point(y+7,x+6),Point(y+7,x+7),Point(y+7,x+8)
    };
public:
    void move(Direction::directionE);
    int input(WINDOW*);
    void showCar(WINDOW*);

};


#endif //SIMPLE2DCARGAME_CAR_H

//
// Created by rezan on 3/18/2021.
//

#ifndef PDCURSES_DIRECTION_H
#define PDCURSES_DIRECTION_H


class Direction {
public:
    enum  directionE{UP,DOWN,LEFT,RIGHT};
    directionE direction;
    Direction(directionE);

};


#endif //PDCURSES_DIRECTION_H

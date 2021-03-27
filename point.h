//
// Created by rezan on 3/18/2021.
//

#ifndef PDCURSES_POINT_H
#define PDCURSES_POINT_H


class Point
{
private:
    int row,column;
public:
    Point(int,int);
    int getRow()const;
    int getColumn()const;
    void setColumn(int );
    void setRow(int );
};


#endif //PDCURSES_POINT_H

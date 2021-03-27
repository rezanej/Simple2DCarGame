//
// Created by rezan on 3/18/2021.
//

#include "point.h"

Point::Point(int row,int column) :row{row},column{column}{}
int Point::getRow() const {
    return this->row;
}int Point::getColumn() const {
    return this->column;
}
void Point::setRow(int row)
{
    this->row=row;
}
void Point::setColumn(int column)
{
    this->column=column;
}
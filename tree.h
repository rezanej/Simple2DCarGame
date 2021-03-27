//
// Created by rezan on 3/27/2021.
//

#ifndef SIMPLE2DCARGAME_TREE_H
#define SIMPLE2DCARGAME_TREE_H
#include <vector>
#include "point.h"
#include "curses.h"
class Tree
{
    int y,x;
    std::vector<Point> points{

        Point(y+1,x-1),Point(y+1,x),Point(y+1,x+1)
        ,Point(y+2,x-2),Point(y+2,x-1),Point(y+2,x),Point(y+2,x+1),Point(y+2,x+2)
        ,Point(y+3,x-1),Point(y+3,x),Point(y+3,x+1)

    };
public:
    Tree(int,int);
    void showTree(WINDOW*);
};


#endif //SIMPLE2DCARGAME_TREE_H

//
// Created by rezan on 3/27/2021.
//

#ifndef SIMPLE2DCARGAME_ROAD_H
#define SIMPLE2DCARGAME_ROAD_H
#include <curses.h>
#include <vector>
#include "tree.h"
#include <random>
#include <ctime>
class MiddleLine{

    int x=154/2,y=10;
public:
    std::vector<Point> points{
            Point(y,x),
            Point(y+1,x),
            Point(y+2,x),
            Point(y+3,x)
    };
public:
    MiddleLine(int y,int x):y{y},x{x}{};
    void showLine(WINDOW * window){
        for (int i = 0; i < points.size(); ++i)
        {
            wattron(window, COLOR_PAIR(4));
            mvwprintw(window, points[i].getRow(), points[i].getColumn(), "*");
            wattroff(window, COLOR_PAIR(4));
        }
    };
};
class Road {

    std::vector<Tree> trees;

public:
    void showRoad(WINDOW *,int,int);
    void showTrees(WINDOW *);
    void buildTrees();
    void moveTrees();
    void checkTree();
    void showLines(WINDOW *);
    void buildLines();
    void moveLines();
    void checkLines();
    std::vector<MiddleLine> lines;
};


#endif //SIMPLE2DCARGAME_ROAD_H

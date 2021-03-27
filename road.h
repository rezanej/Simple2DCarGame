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
class Road {

    std::vector<Tree> trees;
public:
    void showRoad(WINDOW *,int,int);
    void showTrees(WINDOW *);
    void buildTrees();
};


#endif //SIMPLE2DCARGAME_ROAD_H

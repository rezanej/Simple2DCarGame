//
// Created by rezan on 3/27/2021.
//

#include "road.h"
void Road::showRoad(WINDOW * window,int height,int width)
{
    for (int i=0;i<height;i++)
    {
        mvwprintw(window,i,width-30,"&");
        mvwprintw(window,i,30,"&");
    }
}
void Road::buildTrees() {
    srand(time(0));
    int count=30+rand()%15;
    for (int i = 0; i < count/2; ++i) {
        trees.push_back(Tree(2+rand()%60,1+rand()%25));
    }
    for (int i = 0; i < count/2; ++i) {
        trees.push_back(Tree(2+rand()%60,125+rand()%25));
    }
}
void Road::showTrees(WINDOW * window) {
    for (int i = 0; i < trees.size(); ++i) {
        trees[i].showTree(window);
    }
}
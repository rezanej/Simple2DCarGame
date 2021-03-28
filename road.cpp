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
    int count=1;
    for (int i = 0; i < count; ++i) {
        trees.push_back(Tree(rand()%5-10,1+rand()%25));
    }
    for (int i = 0; i < count; ++i) {
        trees.push_back(Tree(+rand()%5-10,125+rand()%25));
    }
}
void Road::showTrees(WINDOW * window) {
    for (int i = 0; i < trees.size(); ++i) {
        trees[i].showTree(window);
    }
}
void Road ::moveTrees() {
    for (int i = 0; i <trees.size() ; ++i) {
        for (int j = 0; j <trees[i].points.size() ; ++j) {
            trees[i].points[j].setRow(trees[i].points[j].getRow()+1);
        }
    }
}
void Road::checkTree() {
    for (int i = 0; i <trees.size() ; ++i) {
        if(trees[i].points[10].getRow()>60)
            trees.erase(trees.begin());
    }
}void Road::buildLines() {
        lines.push_back(MiddleLine(-4,154/2));
}
void Road::showLines(WINDOW * window) {
    for (int i = 0; i < lines.size(); ++i) {
        lines[i].showLine(window);
    }
}
void Road ::moveLines() {
    for (int i = 0; i <lines.size() ; ++i) {
        for (int j = 0; j <lines[i].points.size() ; ++j) {
            lines[i].points[j].setRow(lines[i].points[j].getRow()+1);
        }
    }
}
void Road::checkLines() {
    for (int i = 0; i <lines.size() ; ++i) {
        if(lines[i].points[3].getRow()>60)
            lines.erase(lines.begin());
    }
}

//
// Created by rezan on 3/27/2021.
//

#include "tree.h"
void Tree::showTree(WINDOW * window) {
    for (int i = 0; i <points.size() ; ++i) {
        wattron(window,COLOR_PAIR(3));
        mvwprintw(window,points[i].getRow(),points[i].getColumn(),"*");
        wattroff(window,COLOR_PAIR(3));


    }
}
Tree::Tree(int row,int column):y{row},x{column} {

}
Tree::~Tree() {

}
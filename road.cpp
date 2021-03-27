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
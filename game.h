//
// Created by rezan on 3/27/2021.
//

#ifndef SIMPLE2DCARGAME_GAME_H
#define SIMPLE2DCARGAME_GAME_H
#include "car.h"
#include "enemy.h"
#include "road.h"
#include <vector>
#include "tree.h"
class Game {
public:
    Game();


private:
    Car car=Car(50,37,4);
    Road road;
    std::vector<Car> enemies;
    WINDOW* mainWindow;
    int windowHeight{60},windowWidth{154},windowStartRow{0},windowStartColumn{0};
    int timeChangeCount{0};
    int sleepTime=0;
    void enemyBuilder();
    void roadUpdate();
    void initScreen();
    void initWindow();
    void input();
    void timeChanging();

};


#endif //SIMPLE2DCARGAME_GAME_H

//
// Created by rezan on 3/27/2021.
//

#ifndef SIMPLE2DCARGAME_GAME_H
#define SIMPLE2DCARGAME_GAME_H
#include "car.h"
#include "enemy.h"
#include "road.h"
#include <vector>
class Game {
public:
    Game();


private:
    Car car;
    Road road;
//    std::vector<Enemy> enemies;
    WINDOW* mainWindow;
    int windowHeight{60},windowWidth{155},windowStartRow{0},windowStartColumn{0};
    void enemyBuilder();
    void roadUpdate();
    void initScreen();
    void initWindow();
    void input();

};


#endif //SIMPLE2DCARGAME_GAME_H

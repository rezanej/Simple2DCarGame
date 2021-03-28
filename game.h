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
#include <random>
class Game {
public:
    Game();


private:
    std::default_random_engine randomEngine{static_cast<unsigned int>(time(0))};
    std::uniform_int_distribution<unsigned int> randomInt{0,4};
    std::uniform_int_distribution<unsigned int> randomInt2{5,8};
    Car car=Car(50,37,4);
    Road road;
    std::vector<Car> enemies;
    WINDOW* mainWindow;
    int windowHeight{60},windowWidth{154},windowStartRow{0},windowStartColumn{0};
    int timeChangeCount{0};
    int sleepTime=30;
    void enemyBuilder();
    void roadUpdate();
    void initScreen();
    void initWindow();
    void input();
    void timeChanging();
    void buildEnemies();
    void carAccident();
};


#endif //SIMPLE2DCARGAME_GAME_H

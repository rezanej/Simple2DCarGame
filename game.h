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
    ~Game();

private:
    Car car;
    Road road;
    std::vector<Enemy> enemies;
    void enemyBuilder();
    void roadUpdate();

};


#endif //SIMPLE2DCARGAME_GAME_H
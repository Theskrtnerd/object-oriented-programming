#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"


class Ship: public GameEntity{
    public:
        Ship(): GameEntity(){};
        Ship(int x, int y): GameEntity(x, y, 'S'){};
        void move(int dx, int dy){
            std::tuple<int, int> position_ = this->getPos();
            this->setPosition(std::get<0>(position_)+dx, std::get<1>(position_)+dy);
        }
        ~Ship(){};
};

#endif
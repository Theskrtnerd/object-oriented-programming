#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"


class Mine: public GameEntity{
    public:
        Mine(): GameEntity(){};
        Mine(int x, int y): GameEntity(x, y, 'M'){};
        Explosion explode(){
            this->setType('X');
            std::tuple<int, int> position_ = this->getPos();
            Explosion explosion(std::get<0>(position_),std::get<1>(position_));
            return explosion;
        }
        ~Mine(){};
};

#endif
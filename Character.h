#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"
#include <tuple>

class Character: public Cell{
    public:
        Character(){}
        Character(int x, int y){
            this->setPos(x, y);
            this->setType('C');
        }    
        void move(int dx, int dy){
            std::tuple<int, int> pos_ = this->getPos();
            int x_ = std::get<0>(pos_);
            int y_ = std::get<1>(pos_);
            this->setPos(x_ + dx, y_ + dy);
        }
};

#endif
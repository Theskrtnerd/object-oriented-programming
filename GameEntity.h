#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple> 
#include "Explosion.h"

class GameEntity{
    protected:
        std::tuple<int, int> position;
        char type;
    public:
        GameEntity();
        GameEntity(int x, int y, char type): type(type){
            position = std::make_tuple(x, y);
        };
        std::tuple<int, int> getPos(){
            std::tuple<int, int> tuple(std::get<0>(position), std::get<1>(position));
            return tuple;
        };
        char getType(){
            return type;
        };
        void setPosition(int x, int y){
            position = std::make_tuple(x, y);
        };
        void setType(char type){
            this->type = type;
        };
        virtual void move(int dx, int dy){    
        };
        virtual Explosion explode(){
            Explosion explosion(0,0);
            return explosion;
        };
        ~GameEntity(){};
};

#endif
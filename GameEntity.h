#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple> 

class GameEntity{
    protected:
        std::tuple<int, int> position;
        char type_;
    public:
        GameEntity(){};
        GameEntity(int x, int y, char type): type_(type){
            position = std::make_tuple(x, y);
        };
        std::tuple<int, int> getPos(){
            std::tuple<int, int> tuple(std::get<0>(position), std::get<1>(position));
            return tuple;
        };
        char getType(){
            return type_;
        };
        void setPosition(int x, int y){
            position = std::make_tuple(x, y);
        }
        void setType(char type){
            this->type_ = type;
        }
        ~GameEntity(){};
};

#endif
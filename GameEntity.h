#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple> 

class GameEntity{
    private:
        std::tuple<int, int> position;
        char type;
    public:
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
        ~GameEntity(){};
};

#endif
#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple> 

class GameEntity{
    private:
        std::tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type);
        std::tuple<int, int> getPos();
        char getType();
        ~GameEntity();
};

#endif
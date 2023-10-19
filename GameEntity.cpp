#include "GameEntity.h"

GameEntity::GameEntity(int x, int y, char type): type(type){
    position = std::make_tuple(x, y);
}

std::tuple<int, int> GameEntity::getPos(){
    std::tuple<int, int> tuple(std::get<0>(position), std::get<1>(position));
    return tuple;
}

char GameEntity::getType(){
    return type;
}

GameEntity::~GameEntity(){};
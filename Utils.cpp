#include "Utils.h"
#include <cstdlib>
#include <cmath>

Utils::Utils(){};

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight){
    std::tuple<int, int> tuple(std::rand() % (gridWidth+1), std::rand() % (gridHeight+1));
    return tuple;
};

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
    return std::sqrt((std::get<0>(pos1) - std::get<0>(pos2))*(std::get<0>(pos1) - std::get<0>(pos2)) 
    + (std::get<1>(pos1) - std::get<1>(pos2))*(std::get<1>(pos1) - std::get<1>(pos2)));
};

Utils::~Utils(){};
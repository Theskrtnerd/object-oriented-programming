#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include "GameEntity.h"
#include <cmath>

class Utils{
    public:
        Utils(){};
        std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
        double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            return std::sqrt((std::get<0>(pos1) - std::get<0>(pos2))*(std::get<0>(pos1) - std::get<0>(pos2)) 
                + (std::get<1>(pos1) - std::get<1>(pos2))*(std::get<1>(pos1) - std::get<1>(pos2)));
        }; 
        ~Utils(){};
};

#endif
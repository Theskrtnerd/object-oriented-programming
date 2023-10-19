#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include "GameEntity.h"

class Utils{
    public:
        Utils();
        std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
        double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2); 
        ~Utils();
};

#endif
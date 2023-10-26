#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <cmath>

class Utils{
    public:
        Utils(){};
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
            int x = rand() % gridWidth+1;
            int y = rand() % gridHeight+1;
            tuple<int, int> newPos = make_tuple(x, y);
            return newPos;
        }
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            int a = (std::get<0>(pos1) - std::get<0>(pos2))*(std::get<0>(pos1) - std::get<0>(pos2))
             + (std::get<1>(pos1) - std::get<1>(pos2))*(std::get<1>(pos1) - std::get<1>(pos2));
            return std::sqrt(a);
        }
};

#endif
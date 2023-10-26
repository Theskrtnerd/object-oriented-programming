#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <cmath>

using namespace std;

class Utils{
    public:
        Utils(){};
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
            int x = rand() % gridWidth;
            int y = rand() % gridHeight;
            tuple<int, int> newPos = make_tuple(x, y);
            return newPos;
        }
        static double calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2){
            int a = (get<0>(pos1) - get<0>(pos2))*(get<0>(pos1) - get<0>(pos2))
             + (get<1>(pos1) - get<1>(pos2))*(get<1>(pos1) - get<1>(pos2));
            return sqrt(a);
        }
};

#endif
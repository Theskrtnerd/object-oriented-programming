#include <iostream>
using namespace std;

#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main(){
    GameEntity pos1(1, 2, 'C');
    GameEntity pos2(4, 6, 'C');
    Effect b;
    Utils c;

    cout << c.calculateDistance(pos1.getPos(), pos2.getPos()) << endl;
}
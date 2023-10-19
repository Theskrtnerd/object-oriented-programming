#include <iostream>
using namespace std;

#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main(){
    Explosion e1(1, 2);
    Explosion e2(3, 4);
    Ship s1(5, 6);
    Mine m1(7, 8);

    m1.explode();

    cout << m1.getType() << endl;
}
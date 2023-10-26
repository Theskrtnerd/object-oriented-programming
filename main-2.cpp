#include <iostream>
using namespace std;

#include "Cell.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"

int main(){
    Cell cell1(1,3,'C');
    Cell cell2(4,7,'C');
    Trap trap(1,9);
    Character user(1,8);
    cout << user.getType() << endl;
    cout << std::get<0>(user.getPos()) << ", " << std::get<1>(user.getPos()) << endl;
    user.move(0,1);
    cout << std::get<0>(user.getPos()) << ", " << std::get<1>(user.getPos()) << endl;
    trap.apply(user);
    cout << user.getType() << endl;
    
    cout << Utils::calculateDistance(cell1.getPos(), cell2.getPos()) << endl;
}
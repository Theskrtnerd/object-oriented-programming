#include <iostream>
using namespace std;

#include "Cell.h"
#include "Utils.h"

int main(){
    Cell cell1(1,3,'C');
    Cell cell2(4,7,'C');
    cout << Utils::calculateDistance(cell1.getPos(), cell2.getPos()) << endl;
}
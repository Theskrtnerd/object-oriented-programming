#include <iostream>
using namespace std;

#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

int main() {
    Cell cell1(1,3,'C');
    Cell cell2(4,7,'C');
    
    std::cout << "Distance between Cell 1 and Cell 2 is " << endl;
    cout << Utils::calculateDistance(cell1.getPos(), cell2.getPos()) << endl;

    return 0;
}
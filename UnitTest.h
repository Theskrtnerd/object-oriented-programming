// UnitTest.h

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
        // Add more tests here

        if (addition.add(3, 4) != 7) {
            std::cout << "Test 2 failed!" << std::endl;
        }

        if (addition.add(5, 4) != 9) {
            std::cout << "Test 3 failed!" << std::endl;
        }

        if (addition.add(9, 4) != 13) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }
};
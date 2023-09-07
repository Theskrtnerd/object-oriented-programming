#ifndef FORD_H
#define FORD_H
#include "Car.h"

class Ford: public Car {
  private:
    int badgeNumber;
    float litresOfFuel;
  public:
    Ford();
    Ford(int badgeNumber, int price);

    char get_badgeNumber();
    int get_litresOfFuel();
    void set_badgeNumber(int badgeNumber);
    void set_litresOfFuel(int litres);

    void refuel(int litres);
    void drive(int kms);
};

#endif
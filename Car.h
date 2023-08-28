#ifndef CAR_H
#define CAR_H
#include <ctime>
#include "Vehicle.h"
#include <iostream>

class Car: public Vehicle{
  public:
    Car(int ID);
    int getParkingDuration();
};

#endif
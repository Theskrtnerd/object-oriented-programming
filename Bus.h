#ifndef BUS_H
#define BUS_H
#include <ctime>
#include "Vehicle.h"
#include <iostream>

class Bus: public Vehicle{
  public:
    Bus(int ID);
    int getParkingDuration();
};

#endif
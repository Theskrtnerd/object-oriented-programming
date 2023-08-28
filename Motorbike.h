#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <ctime>
#include "vehicle.h"
#include <iostream>

class Motorbike: public Vehicle{
  public:
    Motorbike(int ID);
    int getParkingDuration();
};

#endif
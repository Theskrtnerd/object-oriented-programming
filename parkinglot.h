#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "vehicle.h"

class ParkingLot{
  private:
    int maxSize;
    Vehicle* vehicles;
    int size;
  public:
    ParkingLot(int maxSize);
    int getCount();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int ID);

};

#endif
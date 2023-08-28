#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot{
  private:
    int _maxSize;
    Vehicle* _vehicles;
    int _size;
  public:
    ParkingLot(int maxSize);
    int getCount();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif
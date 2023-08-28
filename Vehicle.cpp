#include<iostream>
#include "vehicle.h"
using namespace std;

Vehicle::Vehicle(): Vehicle(0){};

Vehicle::Vehicle(int ID){
  this -> timeOfEntry = time(NULL);
  this -> ID = ID;
}

int Vehicle::getID(){
  return this -> ID;
}

int Vehicle::getParkingDuration(){
  return time(NULL) - this->timeOfEntry;
}
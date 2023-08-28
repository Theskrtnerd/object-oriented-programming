#include<iostream>
#include "Vehicle.h"
using namespace std;

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
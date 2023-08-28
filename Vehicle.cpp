#include<iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(){
  this->ID = 0;
  this->timeOfEntry = time(NULL);
}

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
#include<iostream>
#include "Motorbike.h"
using namespace std;

Motorbike::Motorbike(int ID): Vehicle(ID){};

int Motorbike::getParkingDuration(){
  return int(0.85 * this->Vehicle::getParkingDuration());
}

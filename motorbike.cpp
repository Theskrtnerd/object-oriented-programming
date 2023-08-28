#include<iostream>
#include "motorbike.h"
using namespace std;

Motorbike::Motorbike(int ID): Vehicle(ID){};

int Motorbike::getParkingDuration(){
  return 0.85 * this->Vehicle::getParkingDuration();
}

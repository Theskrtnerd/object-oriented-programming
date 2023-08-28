#include<iostream>
#include "bus.h"
using namespace std;

Bus::Bus(int ID): Vehicle(ID){};

int Bus::getParkingDuration(){
  return 0.75*this->Vehicle::getParkingDuration();
}

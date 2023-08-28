#include<iostream>
#include "Bus.h"
using namespace std;

Bus::Bus(int ID): Vehicle(ID){};

int Bus::getParkingDuration(){
  return int(0.75*this->Vehicle::getParkingDuration());
}

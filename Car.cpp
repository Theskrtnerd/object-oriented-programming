#include<iostream>
#include "car.h"
using namespace std;

Car::Car(int ID): Vehicle(ID){};

int Car::getParkingDuration(){
  return int(0.9*this->Vehicle::getParkingDuration());
}
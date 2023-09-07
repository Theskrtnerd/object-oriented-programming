#include<iostream>
using namespace std;
#include "Fleet.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet(){
  *this->fleet = new Car[5];
  Tesla* car1 = new Tesla('S',10000);
  Ford* car2 = new Ford(1,20000);
  Car* car3 = new Car(30000);
  Ford* car4 = new Ford(2,40000);
  Tesla* car5 = new Tesla('T', 50000);
  this->fleet[0] = car1;
  this->fleet[1] = car2;
  this->fleet[2] = car3;
  this->fleet[3] = car4;
  this->fleet[4] = car5;
}

Car** Fleet::get_fleet(){
  return this->fleet;
}

Fleet::~Fleet(){
  for(int i=0;i<5;i++){
    delete[] this->fleet[i];
  }
  delete this->fleet;
}

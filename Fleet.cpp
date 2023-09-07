#include<iostream>
using namespace std;
#include "Fleet.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet(){
  this->fleet = new Car*[5];
  Tesla c1('S',10000);
  Ford c2(1, 20000);
  Car c3(30000);
  Ford c4(2,40000);
  Tesla c5('T',50000);
  this->fleet[0] = &c1;
  this->fleet[1] = &c2;
  this->fleet[2] = &c3;
  this->fleet[3] = &c4;
  this->fleet[4] = &c5;
}

Car** Fleet::get_fleet(){
  return this->fleet;
}

Fleet:~Fleet(){
  delete[] this->fleet;
}


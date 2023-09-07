#include<iostream>
using namespace std;
#include "Fleet.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet(){
  this->fleet = new Car*[5];
  this->fleet[0] = new Tesla('S',10000);
  this->fleet[1] = new Ford(1,20000);
  this->fleet[2] = new Car(30000);
  this->fleet[3] = new Ford(2,40000);
  this->fleet[4] = new Tesla('T',50000);
}

Car** Fleet::get_fleet(){
  return this->fleet;
}

Fleet::~Fleet(){
  delete[] this->fleet;
}


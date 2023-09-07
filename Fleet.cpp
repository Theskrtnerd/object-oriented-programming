#include<iostream>
using namespace std;
#include "Fleet.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet(){
  *this->fleet = new Car[5];
  Tesla car1('S',10000);
  Tesla* mycar1 = &car1;
  Ford car2(1,20000);
  Ford* mycar2 = &car2;
  Car car3(30000);
  Car* mycar3 = &car3;
  Ford car4(2,40000);
  Ford* mycar4 = &car4;
  Tesla car5('T', 50000);
  Tesla* mycar5 = &car5;
  this->fleet[0] = mycar1;
  this->fleet[1] = mycar2;
  this->fleet[2] = mycar3;
  this->fleet[3] = mycar4;
  this->fleet[4] = mycar5;
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

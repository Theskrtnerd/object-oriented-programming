#include "TV.h"
#include<iostream>

using namespace std;

TV::TV(): Appliance(){
  this->screenSize = 0;
};

TV::TV(int powerRating, double screenSize): Appliance(powerRating){
  this->screenSize = screenSize;
};

double TV::getScreenSize(){
  return this->screenSize;
}

void TV::setScreenSize(double screenSize){
  this->screenSize = screenSize;
}

double TV::getPowerConsumption(){
  return this->powerRating*(this->screenSize/10);
}

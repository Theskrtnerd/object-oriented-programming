#include "Fridge.h"
#include<iostream>

using namespace std;

Fridge::Fridge(): Appliance(){
  this->volume = 0;
};

Fridge::Fridge(int powerRating, double volume): Appliance(powerRating){
  this->volume = volume;
};

double Fridge::getVolume(){
  return this->volume;
}

void Fridge::setVolume(double volume){
  this->volume = volume;
}

double Fridge::getPowerConsumption(){
  return this->powerRating*24*(this->volume/100);
}

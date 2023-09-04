#include "Appliance.h"
#include<iostream>

using namespace std;

Appliance::Appliance(){
  this->powerRating = 0;
  this->isOn=false;
}

Appliance::Appliance(int powerRating){
  this->powerRating = powerRating;
  this->isOn = false;
}

int Appliance::get_powerRating(){
  return this->powerRating;
}

bool Appliance::get_isOn(){
  return this->isOn;
}

void Appliance::set_powerRating(int powerRating){
  this->powerRating = powerRating;
}

void Appliance::set_isOn(bool isOn){
  this->isOn = isOn;
}

void Appliance::turnOn(){
  this->isOn = true;
}

void Appliance::turnOff(){
  this->isOn = false;
}

double Appliance::getPowerConsumption(){
  return 0;
}
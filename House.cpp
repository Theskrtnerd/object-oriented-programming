#include<iostream>
using namespace std;
#include "House.h"

House::House(){
  this->numAppliances = 0;
  this->appliances = new Appliance*;
  this->currentNumAppliances = 0;
};

House::House(int numAppliances){
  this->numAppliances = numAppliances;
  this->appliances = new Appliance*;
  this->currentNumAppliances = 0;
}

bool House::addAppliance(Appliance* appliance){
  if (this->currentNumAppliances < this->numAppliances){
    this->appliances[currentNumAppliances] = appliance;
    currentNumAppliances++;
    return true;
  }
  else{
    return false;
  }
}

double House::getTotalPowerConsumption(){
  double total = 0;
  for(int i=0;i<currentNumAppliances;i++){
    total += (this->appliances[i])->getPowerConsumption();
  }
  return total;
}
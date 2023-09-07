#include<iostream>
using namespace std;
#include "Tesla.h"

Tesla::Tesla(): Car(){
  this->batteryPercentage = 100;
};

Tesla::Tesla(char model,int price): Car(price){
  this->price = price;
  this->batteryPercentage = 100;
}

char Tesla::get_model(){return this-> model;}

int Tesla::get_batteryPercentage(){return this-> batteryPercentage;}

void Tesla::set_model(char model){this->model = model;}

void Tesla::set_batteryPercentage(int batteryPercentage){
  if (batteryPercentage < 0){this->batteryPercentage = 0;}
  else{
    if(batteryPercentage > 100){this->batteryPercentage = 100;}
    else{this->batteryPercentage = batteryPercentage;}
  }
}

void Tesla::chargeBattery(int mins){
  this->batteryPercentage = min(float(100), float(this->batteryPercentage+0.5*mins));
}

void Tesla::drive(int kms){ 
  float kms_max_drive = this->batteryPercentage / 0.2;
  this->emissions += min(float(kms),kms_max_drive)*74;
}



#include<iostream>
using namespace std;
#include "Ford.h"

Ford::Ford(): Car(){
  this->litresOfFuel = 60;
};

Ford::Ford(int badgeNumber,int price): Car(price){
  this->price = price;
  this->litresOfFuel = 60;
}

char Ford::get_badgeNumber(){return this-> badgeNumber;}

int Ford::get_litresOfFuel(){return this-> litresOfFuel;}

void Ford::set_badgeNumber(int badgeNumber){this->badgeNumber = badgeNumber;}

void Ford::set_litresOfFuel(int litresOfFuel){
  this->litresOfFuel = litresOfFuel;
}

void Ford::refuel(int litres){
  this->litresOfFuel += litres;
}

void Ford::drive(int kms){ 
  float kms_max_drive = this->litresOfFuel / 0.2;
  this->emissions += min(float(kms),kms_max_drive)*234;
}



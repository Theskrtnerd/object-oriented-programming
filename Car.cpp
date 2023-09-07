#include<iostream>
using namespace std;
#include "Car.h"

Car::Car(){
  this->emissions = 0;
};

Car::Car(int price){
  this->price = price;
  this->emissions = 0;
}

int Car::get_price(){return this-> price;}

int Car::get_emissions(){return this-> emissions;}

void Car::set_price(int price){this->price = price;}

void Car::set_emissions(int emissions){this->emissions = emissions;}

void Car::drive(int kms){
  this->emissions = 20 * kms;
}



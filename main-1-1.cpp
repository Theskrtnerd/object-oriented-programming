#include<iostream>
using namespace std;

#include "Car.h"

int main(){
  Car car(20);
  cout << car.get_emissions() << endl;
  car.set_emissions(40);
  car.drive(20);
  cout << car.get_emissions() << endl;
  return 0;
}
#include<iostream>
using namespace std;

#include "Ford.h"


int main(){
  Ford car(123, 300);
  car.set_litresOfFuel(10);
  car.drive(50);
  cout << car.get_emissions();

}
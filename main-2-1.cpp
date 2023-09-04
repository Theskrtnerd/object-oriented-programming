#include <iostream>
using namespace std;

#include "Fridge.h"

int main(){
  Fridge a(10, 10);
  a.turnOn();
  a.turnOff();
  cout << a.getPowerConsumption();
}
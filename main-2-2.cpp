#include <iostream>
using namespace std;

#include "TV.h"

int main(){
  TV a(10, 10);
  a.turnOn();
  a.turnOff();
  cout << a.getPowerConsumption();
}
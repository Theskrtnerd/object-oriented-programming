#include <iostream>
using namespace std;

#include "TV.h"
#include "Fridge.h"
#include "House.h"


int main(){
  TV a(10, 10);
  Fridge b(20,10);
  House c(2);
  c.addAppliance(&a);
  c.addAppliance(&b);
  cout << c.getTotalPowerConsumption();
}
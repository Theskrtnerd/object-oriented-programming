#include<iostream>
using namespace std;

#include "Tesla.h"


int main(){
  Tesla modelS('S', 300);
  modelS.set_batteryPercentage(10);
  modelS.drive(33);
  cout << modelS.get_batteryPercentage() << endl;

}
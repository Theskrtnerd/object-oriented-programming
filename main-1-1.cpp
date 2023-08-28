#include<iostream>
using namespace std;
#include <windows.h>
#include "car.h"
#include "bus.h"
#include "motorbike.h"
#include "vehicle.h"

int main(){
  int number;
  char initial;
  cout << "How many vehicles do you want to input in?";
  cin >> number;
  Vehicle* vehicles = new Vehicle[number];
  cout << "Now input each type of vehicle you want using its initials";
  for(int i=0;i<number;i++){
    cin >> initial;
    switch(initial){
      case 'C':;
        vehicles[i] = Car(i+1);
        break;
      case 'B':
        vehicles[i] = Bus(i+1);
        break;
      case 'M':
        vehicles[i] = Motorbike(i+1);
        break;
      default:
        cout << "Error!";
        break;
    }
  }
  Sleep(3000);

  for(int i = 0; i<number;i++){
    cout << vehicles[i].getParkingDuration() << endl;
  }
}
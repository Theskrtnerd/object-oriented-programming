#include<iostream>
using namespace std;
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include "ParkingLot.h"

int main(){
  ParkingLot lot(10);
  char initial;
  for(int i=0;i<10;i++){
    cout << "Enter a vehicle initial: ";
    cin >> initial;
    switch(initial){
      case 'C':
        Car myCar(i+1);
        lot.parkVehicle(&myCar);
        break;
      case 'B':
        Bus myBus(i+1);
        lot.parkVehicle(&myBus);
        break;
      case 'M':
        Motorbike myMotorbike(i+1);
        lot.parkVehicle(&myMotorbike);
        break;
      default:
        cout << "Error!";
        break;
    }
  }
  cout << "The number of over staying vehicles is " << lot.countOverstayingVehicles(15); 
}
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
        lot.parkVehicle(Car(i+1));
        break;
      case 'B':
        lot.parkVehicle(Bus(i+1));
        break;
      case 'M':
        lot.parkVehicle(Motorbike(i+1));
        break;
      default:
        cout << "Error!";
        break;
    }
  }
  cout << "The number of over staying vehicles is " << lot.countOverstayingVehicles(15); 
}
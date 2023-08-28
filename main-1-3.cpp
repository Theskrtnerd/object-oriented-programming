#include<iostream>
using namespace std;
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include "Parkinglot.h"

int main(){
  ParkingLot lot(10);
  char initial;
  for(int i=0;i<10;i++){
    cout << "Enter a vehicle initial: ";
    cin >> initial;
    switch(initial){
      case 'C':
        Vehicle *vehicle = new Car(i+1);
        lot.parkVehicle(*vehicle);
        break;
      case 'B':
        Vehicle *vehicle = new Bus(i+1);
        lot.parkVehicle(*vehicle);
        break;
      case 'M':
        Vehicle *vehicle = new Motorbike(i+1);
        lot.parkVehicle(*vehicle);
        break;
      default:
        cout << "Error!";
        break;
    }
  }
  cout << "The number of over staying vehicles is " << lot.countOverstayingVehicles(15); 
}
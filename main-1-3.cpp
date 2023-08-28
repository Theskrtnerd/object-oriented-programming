#include<iostream>
using namespace std;
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include "ParkingLot.h"

int main(){
  ParkingLot lot(10);
  Vehicle* vehicles;
  char initial;
  for(int i=0;i<10;i++){
    cout << "Enter a vehicle initial: ";
    cin >> initial;
    switch(initial){
      case 'C':
        vehicles[i] = Car(i+1);
        lot.parkVehicle(&vehicles[i]);
        break;
      case 'B':
        vehicles[i] = Bus(i+1);
        lot.parkVehicle(&vehicles[i]);
        break;
      case 'M':
        vehicles[i] = Motorbike(i+1);
        lot.parkVehicle(&vehicles[i]);
        break;
      default:
        cout << "Error!";
        break;
    }
  }
  cout << "The number of over staying vehicles is " << lot.countOverstayingVehicles(15); 
}
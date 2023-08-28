#include<iostream>
using namespace std;
#include "car.h"
#include "bus.h"
#include "motorbike.h"
#include "vehicle.h"
#include "parkinglot.h"

int main(){
  ParkingLot lot(10);
  char initial;
  for(int i=0;i<11;i++){
    cout << "Enter a vehicle initial: ";
    cin >> initial;
    cout << endl;
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
  int number;
  cout << "Choose an ID to remove a vehicle out of the lot: " << endl;
  cin >> number;
  lot.unparkVehicle(number);
}
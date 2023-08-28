#include<iostream>
using namespace std;
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include "ParkingLot.h"

int main(){
  ParkingLot lot(10);
  Vehicle *vehicles;
  char initial;
  for(int i=0;i<11;i++){
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
  int number;
  cout << "Choose an ID to remove a vehicle out of the lot: " << endl;
  cin >> number;
  lot.unparkVehicle(number);
}
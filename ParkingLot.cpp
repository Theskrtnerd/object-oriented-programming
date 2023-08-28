#include<iostream>
using namespace std;
#include "ParkingLot.h"

ParkingLot::ParkingLot(int maxSize): _maxSize(maxSize){
  _size = 0;
  _vehicles = new Vehicle[maxSize];
};

int ParkingLot::getCount(){
  return _size;
}

void ParkingLot::parkVehicle(Vehicle* vehicle){
  if (_size < _maxSize){
    _vehicles[_size] = *vehicle;
    _size++;
  }
  else{
    cout << "The lot is full" << endl;
  }
}

void ParkingLot::unparkVehicle(int ID){
  bool removed = false;
  for(int i=0; i<_size;i++){
    if(_vehicles[i].getID() == ID){
      for(int j=i; j<_size-1;j++){
        _vehicles[i] = _vehicles[i+1];
      }
      removed = true;
    }
  }
  if(removed == true){
      _size--;
  }
  else{
    cout << "Vehicle not in the lot" << endl;
  }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
  int count = 0;
  for(int i=0;i<_size;i++){
    if(_vehicles[i].getParkingDuration() > maxParkingDuration){
      count++;
    }
  } 
  return count;
}
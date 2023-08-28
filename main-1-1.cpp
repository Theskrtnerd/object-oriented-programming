#include<iostream>
using namespace std;
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"

int main(){
  int number;
  char initial;
  cout << "How many vehicles do you want to input in?";
  cin >> number;
  Vehicle* vehicles[number];
  cout << "Now input each type of vehicle you want using its initials";
  for(int i=0;i<number;i++){
    cin >> initial;
    switch(initial){
      case 'C':
        vehicles[i] = new Car(i+1);
        break;
      case 'B':
        vehicles[i] = new Bus(i+1);
        break;
      case 'M':
        vehicles[i] = new Motorbike(i+1);
        break;
      default:
        cout << "Error!";
        break;
    }
  }

  for(int i = 0; i<number;i++){
    cout << vehicles[i]->getParkingDuration() << endl;
    delete vehicles[i];
  }
}
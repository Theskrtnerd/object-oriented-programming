#include<iostream>
#include "House.h"

using namespace std;

House::House(){
  _ownerName = "";
  _lotNumber = 0;
}

House::House(string ownerName, int lotNumber){
  _ownerName = ownerName;
  _lotNumber = lotNumber;
}

string House::get_owner_name(){
  return _ownerName;
};                // returns the name of the house owner

int House::get_lot_number(){
  return _lotNumber;
};                        // returns the house's lot number

House::~House(){};
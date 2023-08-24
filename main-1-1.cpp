#include<iostream>
#include "House.h"
using namespace std;

int main(){
  House a;
  House b("Barry", 1234);
  cout << a.get_owner_name(); 
  cout << b.get_owner_name() << " " << b.get_lot_number();
  
}
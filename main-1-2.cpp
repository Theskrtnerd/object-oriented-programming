#include<iostream>
#include "House.h"
#include "Subdivision.h"
using namespace std;

int main(){
  Subdivision Modbury("Modbury", 10);
  cout << Modbury.get_subdiv_name() << " has "  << Modbury.get_num_houses() << " houses." << endl;
  House Barry("Barry", 1);
  House Tyler("Tyler", 2);

  cout << Modbury.add_House(Barry) << endl;
  cout << Modbury.add_House(Tyler) << endl;

  cout << Modbury.get_subdiv_name() << " has "  << Modbury.get_num_houses() << " houses." << endl;

  cout << "The list of houses is " << Modbury.get_Houses() << endl;

}
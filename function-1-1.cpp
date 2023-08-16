#include<iostream>
#include "Person.h"

using namespace std;

Person* createPersonArray(int n){
  Person *PersonArray = new Person[n];
  for(int i=0;i<n;i++){
    PersonArray[i].name = "John Doe";
    PersonArray[i].age = 0;
  }
  return PersonArray;
}

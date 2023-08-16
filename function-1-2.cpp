#include<iostream>
#include "Person.h"

using namespace std;

Person* createPersonArray(int n){
  Person *PersonArray = new Person[n];
  for(int i=0;i<n;i++){
    PersonArray[i].name = "Jane Doe";
    PersonArray[i].age = 1;
  }
  return PersonArray;
}

PersonList createPersonList(int n){
  PersonList list;
  list.numPeople = n;
  list.people = createPersonArray(n);
  return list;
}
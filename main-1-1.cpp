#include<iostream>
#include "Person.h"

using namespace std;

extern Person* createPersonArray(int);

int main(){
  Person* arr = createPersonArray(10);
  for(int i=0;i<10;i++){
    cout << arr[i].name << " " << arr[i].age << endl;
  }
  return 0;
}
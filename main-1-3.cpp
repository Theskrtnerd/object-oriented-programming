#include<iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);

int main(){
  PersonList arr1 = createPersonList(10);
  PersonList arr2 = deepCopyPersonList(arr1);
  for(int i=0;i<10;i++){
    cout << arr1.people[i].name << " " << arr1.people[i].age << endl;
    cout << arr2.people[i].name << " " << arr2.people[i].age << endl;
  }
  return 0;
}
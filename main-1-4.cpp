#include<iostream>
#include "function-1-4.cpp"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
  PersonList arr1 = createPersonList(10);
  PersonList arr2 = shallowCopyPersonList(arr1);
  for(int i=0;i<10;i++){
    cout << arr1.people[i].name << " " << arr1.people[i].age << endl;
    cout << arr2.people[i].name << " " << arr2.people[i].age << endl;
  }
  return 0;
}
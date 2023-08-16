#include<iostream>

using namespace std;

extern PersonList createPersonList(int);

int main(){
  PersonList arr = createPersonList(10);
  for(int i=0;i<10;i++){
    cout << arr.people[i].name << " " << arr.people[i].age << endl;
  }
  return 0;
}
#include<iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *,int *,int);
extern int *reverseArray(int *,int);

int main(){
  int* arr1 = readNumbers();
  int* arr2 = reverseArray(arr1, 10);
  cout << equalsArray(arr1,arr2,10);
  delete[] arr1, arr2;
  return 0;
}
#include<iostream>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *,int);

int main(){
  int* arr = readNumbers();
  cout << secondSmallestSum(arr,10);
  delete[] arr;
  return 0;
}
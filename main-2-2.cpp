#include<iostream>
using namespace std;

extern int bin_to_int(int[], int);

int main(){
  int arr[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,1};
  cout << bin_to_int(arr, 30);
  return 0;
}
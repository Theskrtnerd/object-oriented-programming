#include<iostream>
using namespace std;

void changeValue(double* a){
  *a = 42.0; 
}

void printArray(double* arr, int n){
  for(int i=0; i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

double arrayMax(double* arr, int n){
  double max = arr[0];
  for(int i=1;i<n;i++){
    if (arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

double* dynamicArray(int n, double m){
  double* arr = new double[n];
  for(int i=0; i<n;i++){
    arr[i] = m;
  }
  return arr;
}
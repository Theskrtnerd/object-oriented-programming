#include <iostream>
using namespace std;

double weighted_average(int array[], int n){
  if(n < 1){
    return 0;
  }
  double total;
  int key, j, s;
  for (int i = 1; i < n; i++) {
    key = array[i];
    j = i - 1;
    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = key;
  }
  for (int i=0;i<n;i++){
    if (array[i] != array[i+1]){
      total += array[i]*(i-s+1)*(i-s+1);
      s = i+1;
    }
  }
  return total/n;
}
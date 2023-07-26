#include <iostream>
using namespace std;

int median_array(int array[], int n){
  if (n < 1){
    return 0;
  }
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = array[i];
    j = i - 1;
    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = key;
  }
  if(n%2!=0){
    return array[(n-1)/2];
  }
  else{
    return int((array[n/2]+array[n/2-1])/2);
  }
}
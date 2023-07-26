#include <iostream>
using namespace std;

int min_element(int array[], int n){
  if (n < 1){
    return 0;
  }
  int min = array[0];
  for(int i=0;i<n;i++){
    if(array[i] < min){
      min = array[i];
    }
  }
  return min;
}
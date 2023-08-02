#include <iostream>
using namespace std;
#include <cmath>

int array_min(int integer[], int length){
  int min=integer[0];
  for(int i=1;i<length;i++){
    if(integer[i] < min){
      min = integer[i];
    }
  }
  return min;
}

int array_max(int integer[], int length){
  int min=integer[0];
  for(int i=1;i<length;i++){
    if(integer[i] > min){
      min = integer[i];
    }
  }
  return min;
}

int sum_min_max(int integer[], int length){
  if(length<1){
    return -1;
  }
  return array_max(integer,length) + array_min(integer,length);
}

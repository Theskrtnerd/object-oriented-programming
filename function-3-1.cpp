#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n){
  if(n<1){
    return false;
  }
  for(int i=0; i<int((n-1)/2);i++){
    if(array[i]!=array[n-1-i] or array[i] > array[i+1]){
      return false;
    }
  }
  return true;
}
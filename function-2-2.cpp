#include <iostream>
using namespace std;

long long pow2(int pow){
  long long s = 1;
  for(int i = 0;i<pow;i++){
    s *= 2;
  }
  return s;
}

int bin_to_int(int binary_digits[], int number_of_digits){
  int ans = 0;
  for(int i=0;i<number_of_digits;i++){
    if(binary_digits[i] == 1){
      ans += pow2(number_of_digits-i-1);
    }
  }
  return ans;
}
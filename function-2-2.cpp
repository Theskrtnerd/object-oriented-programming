#include <iostream>
using namespace std;
#include <cmath>

long long pow2(long long n){
  long long ans=1;
  for(int i=0;i<n;i++){
    ans *= 2;
  }
  return ans;
}

int binary_to_int(int binary_digits[], int number_of_digits){
  int ans = 0;
  for(int i = 0;i<number_of_digits;i++){
    if(binary_digits[i] == 1){
      ans += pow2(number_of_digits-1-i);
    }
  }
  return ans;
}
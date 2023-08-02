#include<iostream>
#include "function-2-4.cpp"

extern int sum_min_max(string);

int main(){
  int binary_digits[10] = {1,0,0,0,1,1,0,0,0,1};
  cout << sum_min_max(binary_digits,10);
  return 0;
}
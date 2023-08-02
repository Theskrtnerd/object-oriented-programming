#include<iostream>
#include "function-2-3.cpp"

extern int sum_array_elements(string);

int main(){
  int binary_digits[10] = {1,0,0,0,1,1,0,0,0,1};
  cout << sum_array_elements(binary_digits,10);
  return 0;
}
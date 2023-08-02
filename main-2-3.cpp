#include<iostream>

extern int sum_array_elements(int[],int);

int main(){
  int binary_digits[10] = {1,0,0,0,1,1,0,0,0,1};
  std::cout << sum_array_elements(binary_digits,10);
  return 0;
}
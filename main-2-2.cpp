#include<iostream>

extern int binary_to_int(int[],int);

int main(){
  int binary_digits[10] = {1,0,0,0,1,0,0,1,0,1};
  std::cout << binary_to_int(binary_digits,10);
  return 0;
}
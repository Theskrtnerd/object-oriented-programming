#include<iostream>
#include "function-2-3.cpp"

extern void print_binary_str(string);

int main(){
  int binary_digits[10] = {1,0,0,0,1,0,0,1,0,1};
  cout << binary_to_int(binary_digits,10);
  return 0;
}
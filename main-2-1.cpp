#include<iostream>
#include "function-2-1.cpp"

extern void print_binary_str(string);

int main(){
  string decimal_number = "1234";
  print_binary_str(decimal_number) ;
  return 0;
}
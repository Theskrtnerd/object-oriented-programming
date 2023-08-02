#include<iostream>
#include<string>

extern void print_binary_str(std::string);

int main(){
  std::string decimal_number = "1234";
  print_binary_str(decimal_number) ;
  return 0;
}
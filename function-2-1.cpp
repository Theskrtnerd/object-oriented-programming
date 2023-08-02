#include <iostream>
using namespace std;


int basetentotwo(int n){
  int count = 0;
  int ans = 0;
  while(n>0){
    ans = ans + (n%2)*pow10(count);
    n = int(n/2);
    count++;
  }
  return ans;
}

void print_binary_str(string decimal_number){
  int decimal_number = stoi(decimal_number);
}
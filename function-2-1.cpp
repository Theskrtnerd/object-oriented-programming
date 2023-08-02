#include <iostream>
using namespace std;
#include <cmath>

long long pow10(long long n){
  long long ans=1;
  for(int i=0;i<n;i++){
    ans *= 10;
  }
  return ans;
}

long long basetentotwo(long long n){
  int count = 0;
  long long ans = 0;
  while(n>0){
    ans = ans + (n%2)*pow10(count);
    n = floor(n/2);
    count++;
  }
  return ans;
}

void print_binary_str(string decimal_number){
  long long number = stoi(decimal_number);
  long long output_number = basetentotwo(number);
  cout << output_number;
}
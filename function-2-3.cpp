#include <iostream>
using namespace std;
#include <cmath>

int sum_if_palindrome(int integer[], int length){
  int sum=0;
  for(int i=0;i<length,i++){
    sum+=integer[i];
  }
  return sum;
}

bool is_palindrome(int integer[], int length){
  
}
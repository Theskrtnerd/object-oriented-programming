#include <iostream>
using namespace std;
#include <cmath>

int sum_if_palindrome(int integer[], int length){
  int sum=0;
  for(int i=0;i<length;i++){
    sum+=integer[i];
  }
  return sum;
}

bool is_palindrome(int integer[], int length){
  for(int i=0; i<int((length-1)/2);i++){
    if(integer[i]!=integer[length-1-i]){
      return false;
    }
  }
  return true;
}

int sum_array_elements(int integer[], int length){
  if(length < 1){
    return -1;
  }
  if(is_palindrome(integer,length)){
    return sum_if_palindrome(integer,length);
  }
  else{
    return -2;
  }
}
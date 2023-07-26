#include <iostream>
#include "function-1-2.cpp"

extern double array_mean(int[], int);

int main(){
  int array[3] = {1,2,122};
  std::cout << array_mean(array,3);
}
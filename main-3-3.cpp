#include <iostream>
#include "function-3-3.cpp"

extern double weighted_average(int[], int);

int main(){
  int array[5] = {2,4,4,2,0};
  std::cout << weighted_average(array,5);
}
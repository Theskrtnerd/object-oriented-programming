#include <iostream>
#include "function-3-5.cpp"

extern double sum_even(double[], int);

int main(){
  double array[5] = {2.0,4.0,4.0,2.0,0.0};
  std::cout << sum_even(array,5);
}
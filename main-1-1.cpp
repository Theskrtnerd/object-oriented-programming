#include <iostream>
#include "function-1-1.cpp"

extern int array_sum(int[], int);

int main(){
  int array[3] = {1,2,3};
  std::cout << array_sum(array,3);
}
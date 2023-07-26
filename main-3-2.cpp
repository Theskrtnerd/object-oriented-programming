#include <iostream>
#include "function-3-2.cpp"

extern int median_array(int[], int);

int main(){
  int array[4] = {2,4,4,2};
  std::cout << median_array(array,4);
}
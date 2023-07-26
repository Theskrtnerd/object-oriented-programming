#include <iostream>
#include "function-1-3.cpp"

extern int num_count(int[], int, int);

int main(){
  int array[9] = {1,2,122,1,1,4,1,4,5};
  std::cout << num_count(array,9,4);
}
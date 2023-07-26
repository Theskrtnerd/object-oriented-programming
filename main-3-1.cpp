#include <iostream>
#include "function-3-1.cpp"

extern bool is_fanarray(int[], int);

int main(){
  int array[4] = {2,4,4,2};
  std::cout << is_fanarray(array,4);
}
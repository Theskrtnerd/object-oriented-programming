#include <iostream>
#include "function-2-5.cpp"

extern bool is_descending(int[], int);

int main(){
  int array[2] = {1,2};
  std::cout << is_descending(array,2);
}
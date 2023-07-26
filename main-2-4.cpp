#include <iostream>
#include "function-2-4.cpp"

extern bool is_ascending(int[], int);

int main(){
  int array[4] = {1};
  std::cout << is_ascending(array,1);
}
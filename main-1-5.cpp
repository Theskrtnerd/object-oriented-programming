#include <iostream>
#include "function-1-5.cpp"

extern int count_evens(int[], int[], int);

int main(){
  std::cout << count_evens(8);
}
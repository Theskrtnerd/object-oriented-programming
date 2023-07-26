#include <iostream>

extern int max_element(int[], int);

int main(){
  int array[4] = {1,2,3,0};
  std::cout << max_element(array,4);
}
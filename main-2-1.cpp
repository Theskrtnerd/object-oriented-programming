#include <iostream>

extern int min_element(int[], int);

int main(){
  int array[4] = {1,2,3,0};
  std::cout << min_element(array,4);
}
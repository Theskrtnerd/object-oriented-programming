#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main(){
  int array1[9] = {1,2,1,1,1,4,1,4,5};
  int array2[9] = {1,2,2,1,1,4,1,4,5};
  std::cout << sum_two_arrays(array1,array2,9);
}
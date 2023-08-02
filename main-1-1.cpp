#include<iostream>
#include "function-1-1.cpp"

extern int sum_diagonal(int[4][4]);

int main(){
  int matrix[4][4] = {
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4}
  };
  std::cout << sum_diagonal(matrix);

  return 0;
}
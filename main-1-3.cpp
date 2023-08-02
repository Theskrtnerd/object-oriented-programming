#include<iostream>

extern void count_digits(int[4][4]);

int main(){
  int matrix[4][4] = {
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4}
  };
  count_digits(matrix);
  return 0;
}
#include<iostream>

extern void print_scaled(int[3][3],int);

int main(){
  int scale = 3;
  int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
  print_scaled(threebythree,scale);
  return 0;
}
#include <iostream>
using namespace std;

void print_scaled(int array[3][3],int scale){
  for(int i=0;i<3;i++){
    cout << array[i][0]*scale << " "<< array[i][1]*scale << " "<< array[i][2]*scale << endl;
  }
}
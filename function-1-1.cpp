#include <iostream>
using namespace std;

void print_matrix(int array[10][10]){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
}
#include<iostream>
using namespace std;

int *readNumbers(){ 
  int *arr = new int[10]{0};
  for(int i=0;i<10;i++){
    cin >> arr[i];
  }
  return arr;
} ;
void printNumbers(int *numbers,int length){
  for(int i=0;i<length;i++){
    cout << i << " " << numbers[i] << endl;
  }
} ;
bool equalsArray(int *numbers1,int *numbers2,int length){
  if (length < 1){
    return false;
  }
  for(int i=0;i<length;i++){
    if(numbers1[i] != numbers2[i]){
      return false;
    }
  }
  return true;
} ;
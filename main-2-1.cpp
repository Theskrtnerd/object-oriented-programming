#include<iostream>
using namespace std;

void hexDigits(int *,int);

int main(){
  int *numbers = new int[10]{0};
  for(int i=0;i<10;i++){
    cin >> numbers[i];
  }
  hexDigits(numbers,10);
  delete[] numbers;
  return 0;
}
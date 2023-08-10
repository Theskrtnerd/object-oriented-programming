#include<iostream>
using namespace std;

extern int palindrome_sum(int[], int);

int main(){
  int arr[5] = {1,0,1,0,1};
  cout << palindrome_sum(arr, 5);
  return 0;
}
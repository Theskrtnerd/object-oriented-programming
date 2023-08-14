using namespace std;
#include <bits/stdc++.h>

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
int sum_sub_array(int *numbers, int start, int end){
  int sum =0;
  for(int i=start;i<(end+1);i++){
    sum+=numbers[i];
  }
  return sum;
}
int secondSmallestSum(int *numbers,int length){
  int bruh = length*length;
  int all_sum[bruh];
  for(int i=0;i<bruh;i++){
    all_sum[i] = 100000;
  }
  for(int i=0;i<length;i++){
    for(int j=i;j<length;j++){
      all_sum[i*length+j] = sum_sub_array(numbers,i,j);
    }
  }
  sort(all_sum,all_sum+bruh);
  return all_sum[1];
};
#include <iostream>
using namespace std;

int pow10(int n){
  int ans=1;
  for(int i=0;i<n;i++){
    ans *= 10;
  }
  return ans;
}

int basetentotwo(int n){
  int count = 0;
  int ans = 0;
  while(n>0){
    ans = ans + (n%2)*pow10(count);
    n = int(n/2);
    count++;
  }
  return ans;
}

int main(){
  cout << basetentotwo(12);
  return 0;
}
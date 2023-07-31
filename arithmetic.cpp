#include <iostream>
#include <cmath>
using namespace std;

int pow10(int n){
  int ans=1;
  for(int i=0;i<n;i++){
    ans *= 10;
  }
  return ans;
}

int getoneorzero(int n, int pos){
  return floor((n%(pow10(pos+1)))/(pow10(pos+1)));
}

int badd(int numb){
 int nod = floor(log10(numb));
 for(int i=0;i<nod;i++){
  cout << getoneorzero(numb,i);
 }
}

int
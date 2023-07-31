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
  return int((n%(pow10(pos+1)))/(pow10(pos)));
}

int badd(int numb1, int numb2){
  int ans = 0;
  int nod = max(floor(log10(numb1))+1, floor(log10(numb2))+1);
  int r = 0;
  for(int i=0;i<nod;i++){
    ans += ((getoneorzero(numb1,i) + getoneorzero(numb2,i) + r)%2)*pow10(i);
    r = floor((getoneorzero(numb1,i) + getoneorzero(numb2,i) + r)/2);
  }
  if(r==1){
    ans += r*pow10(nod+1);
  }
  return ans;
}

int bsubtract(int numb1, int numb2){
  int ans = 0;
  int r = 0;
  int nod = max(floor(log10(numb1))+1, floor(log10(numb2))+1);
  for(int i=0;i<nod;i++){
    if(getoneorzero(numb1,nod-1-i) < getoneorzero(numb2,nod-1-i)){
      return -1;
    }
    if (getoneorzero(numb1,nod-1-i) > getoneorzero(numb2,nod-1-i)){
      break;
    }
  }
  for(int i=0;i<nod;i++){
    int p = abs(((getoneorzero(numb1,i) - getoneorzero(numb2,i) - r)%2));
    ans += p*pow10(i);
    if(getoneorzero(numb1,i) - getoneorzero(numb2,i) - r == -1 or getoneorzero(numb1,i) - getoneorzero(numb2,i) - r == -2){
      r = 1;
    }
    else{
      r = 0;
    }
  }
  return ans;
}

int bshiftleft(int n){
  return n*10;
}

int bshiftright(int n){
  return floor(n/10);
}

int main(){
  cout << badd(111011,111) << endl;
  cout << bsubtract(111011,111) << endl;
  cout << bshiftleft(111011) << endl;
  cout << bshiftright(111011) << endl;
  return 0;
}
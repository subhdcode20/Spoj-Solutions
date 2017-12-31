#include <bits/stdc++.h>
//#include <string>
using namespace std;

int gcd(int x, int y) {
  if(y == 0) return x;
  else return gcd(y , x%y);
}

int main()
{
  int t;
  cin>>t;
  string big;
  int a;
  while(t--) {
    cin>>a>>big;
    if(a == 0) {
      for(int j=0; j<big.length(); j++) cout<<big[j]-'0';
      cout<<endl;
      continue;
    }
    else if(big == "0") { cout<<a<<endl; continue; }
    else {
      int m, d=0;
      for(int i=0; i<big.length(); i++) {
        m = d*10 + (big[i] - '0');
        d = m % a;
      }
      cout<<gcd(a, d)<<endl;
    }
  }
return 0;
}

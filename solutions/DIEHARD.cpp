#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
int h, a;
int x;
while(t--) {
  cin>>h>>a;
  h += 3;
  a += 2;
  x=1;
  while(1) {
    if(h>5 && a>10) {
      h -= 2;
      a -= 8;
      x += 2;
    }
    else if(h>20 && a<=10) {
      h -= 17;
      a += 7;
      x += 2;
    }
    else {
      cout<<x<<endl; break;
    }
  }
}
    return 0;
}

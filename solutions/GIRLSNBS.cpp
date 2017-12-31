#include <bits/stdc++.h>
using namespace std;

int main() {
  float a, b;
  cin>>a>>b;
  float x;
  while(a != -1 && b != -1) {
    if(b > a) {
      int y = a+b;
      a = y - a;
      b = y - b;
    }
    b++;
    x = ceil(a/b);
    cout<<x<<endl;
    cin>>a>>b;
  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
long long int n;
while(t--) {
  cin>>n;
  long long int result = n*(n+2)*((2*n)+1);
  result /= 8;
  cout<<result<<endl;
}
    return 0;
}

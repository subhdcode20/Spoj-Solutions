#include <bits/stdc++.h>
using namespace std;

int main() {
  long n, m;
  cin>>n>>m;
  vector<int> v;
  int t = n, x;
  while(t--) {
    cin>>x;
    v.push_back(x);
  }
  long sum=0;
  long diff = INT_MAX;
  int i,j;
  for(i=0, j=0; j<n; j++) {
    sum += v[j];
    if(sum > m) {
      while(sum > m) {
        sum -= v[i];
        i++;
      }
    }
    else if(sum == m) {
      diff = 0;
      break;
    }
    diff = min(diff, m-sum);
  }
  cout<<m-diff<<endl;
}

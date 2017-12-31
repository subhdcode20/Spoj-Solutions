#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int s[n];
  for(int i=0; i<n; i++) {
    scanf("%d", &s[i]);
  }
  vector< int > lhs;
  vector< int > rhs;
  for(int i=0; i<n; i++) {
    if(s[i] != 0) {
      for(int j=0; j<n; j++) {
        for(int k=0; k<n; k++) {
          rhs.push_back(s[i]*(s[j] + s[k]));
        }
      }
    }
  }
  sort(rhs.begin(), rhs.end());
  long long ans=0;
  long val;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      for(int k=0; k<n; k++) {
        val = (s[i]*s[j]) + s[k];
        lhs.push_back(val);
        ans += (upper_bound(rhs.begin(), rhs.end(), val)) - (lower_bound(rhs.begin(), rhs.end(), val));
      }
    }
  }
  printf("%lld\n", ans);
  return 0;
}

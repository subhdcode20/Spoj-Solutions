#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  int dp[10005];

  while(t--) {
    int e, f;
    cin>>e>>f;
    int x = f-e;
    int n;
    cin>>n;
    int p[n+5], w[n+5];
    for(int i=0; i<n; i++) {
      cin>>p[i];
      cin>>w[i];
    }
    fill(dp, dp + 10005, INT_MAX);
    for(int i=1; i<=x; i++) {
      for(int j=0; j<n; j++) {
        if(w[j] == i) dp[i] = min(dp[i], p[j]);
        else if(i > w[j] && (dp[i - w[j]]) != INT_MAX) {
            dp[i] = min(dp[i], p[j] + dp[i - w[j]]);

        }
      }
    }
    if(dp[x] != INT_MAX) cout<<"The minimum amount of money in the piggy-bank is "<<dp[x]<<"."<<endl;
    else cout<<"This is impossible."<<endl;
  }
  return 0;
}

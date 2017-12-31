#include <bits/stdc++.h>
using namespace std;

int dp[6101][6101];
int main() {
  int t;
  cin>>t;
  while(t--) {
    string s;
    cin>>s;
    int len = s.size();
    memset(dp, 0, sizeof(dp));
    int l, h;
    for(int gap=1; gap < len; gap++) {
      for(l=0, h=gap; h < len; l++, h++) {
        dp[l][h] = (s[l] == s[h]) ? dp[l+1][h-1] : (min(dp[l][h-1], dp[l+1][h]) + 1);
      }
    }
    cout<<dp[0][len-1]<<endl;
  }

}

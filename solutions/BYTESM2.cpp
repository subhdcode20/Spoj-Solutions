#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--) {
  int h, w;
  cin>>h>>w;
  int table[h][w];
  for(int i=0; i<h; i++) {
    for(int j=0; j<w; j++) {
      cin>>table[i][j];
    }
  }
  int dp[h][w];
  for(int i=0; i<w; i++) {
    dp[0][i] = table[0][i];
  }
  int sum,max;
  for(int i=1; i<h; i++) {
    for(int j=0; j<w; j++) {
      if(j==0) {
        sum = table[i][j] + dp[i-1][j];
        max = sum;
        sum = table[i][j] + dp[i-1][j+1];
        if(sum > max) max = sum;
        dp[i][j] = max;
      }
      else if(j == w-1) {
        sum = table[i][j] + dp[i-1][j];
        max = sum;
        sum = table[i][j] + dp[i-1][j-1];
        if(sum > max) max = sum;
        dp[i][j] = max;
      }
      else {
        sum = table[i][j] + dp[i-1][j];
        max = sum;
        sum = table[i][j] + dp[i-1][j+1];
        if(sum > max) max = sum;
        sum = table[i][j] + dp[i-1][j-1];
        if(sum > max) max = sum;
        dp[i][j] = max;
      }
    }
  }
  cout<<*max_element(dp[h-1], dp[h-1] + w)<<endl;
}

    return 0;
}

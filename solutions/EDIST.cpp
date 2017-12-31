#include <bits/stdc++.h>
using namespace std;

int dp[2005][2005];

 int main() {
   int t;
   cin>>t;
   int x;
   while(t--) {
     string s1, s2;
     cin>>s1>>s2;
     memset(dp, 0, sizeof(dp));
     int len1 = s1.length(); int len2 = s2.length();
     for(int i=0; i<=len1; i++) dp[i][0] = i;
     for(int j=0; j<=len2; j++) dp[0][j] = j;
     for(int i=1; i<=len1; i++) {
       for(int j=1; j<=len2; j++) {
         if(s1[i-1] == s2[j-1]) x = 0;
         else x = 1;
         dp[i][j] = min(dp[i-1][j-1] + x, min(dp[i-1][j] + 1, dp[i][j-1] + 1));
       }
     }
     cout<<dp[len1][len2]<<endl;
   }
   return 0;
 }

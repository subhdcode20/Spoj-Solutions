#include <bits/stdc++.h>
using namespace std;
int dp[101][501];
 int main() {
   int m, n;
   cin>>m>>n;
   while(m!=0 && n!=0) {
     int budget[n], fun[n];
     for(int i=0; i<n; i++) {
       cin>>budget[i]>>fun[i];
     }
     for(int i=0; i<n; i++) {
       dp[i][0] = 0;
     }
     for(int i=1; i<budget[0]; i++) {
       dp[0][i] = 0;
     }
     for(int i=budget[0]; i<=m; i++) {
        dp[0][i] = fun[0];
     }
     for(int i=1; i<n; i++) {
       for(int j=1; j<=m; j++) {
         if(budget[i] > j) {
           dp[i][j] = dp[i-1][j];
         }
         else {
           dp[i][j] = max(fun[i] + dp[i-1][j-budget[i]], dp[i-1][j]);
         }
       }
     }
     int max_fun = 0, money=0;
     int index=1;
     int rem = dp[n-1][1];
     for(int i=1; i<=m; i++) {
       max_fun = max(dp[n-1][i], max_fun);
       if(max_fun != rem) {
       	rem = max_fun;
       	index = i;
       }

     }
    money = index;
     cout<<money<<" "<<max_fun<<endl;
     cin>>m>>n;
   }
   return 0;
 }

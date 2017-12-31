#include <bits/stdc++.h>
using namespace std;
    map<long long, long long> dp;

long long solve(long long n ) {
  if(n == 0) return 0;
  if(n == 1) return 1;

   if(dp[n]) return dp[n];
   dp[n] = max((solve(n/2) + solve(n/3) + solve(n/4)), n);
   return dp[n];

}

int main()
{
  long long n;
  dp[0] = 0;
  dp[1] = 1;
  while(scanf("%lld\n", &n) != EOF) {
    printf("%lld\n", solve(n));
  }
    return 0;
}

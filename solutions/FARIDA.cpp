#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
int x;
long long v[1001], dp[1001];
for(int j=1; j<=t; j++) {
  long long n;
  cin>>n;
  if(n==0) {cout<<"Case "<<j<<": 0"<<endl; continue;}

  for(int i=0; i<n; i++) {
    cin>>v[i];
  }
  if(n==1) cout<<"Case "<<j<<": "<<v[0]<<endl;
  else if(n==2) cout<<"Case "<<j<<": "<<max(v[0], v[1])<<endl;
  else {
    dp[0] = v[0];
    dp[1] = max(v[0], v[1]);
    for(int i=2; i<n; i++) {
      dp[i] = max(dp[i-1], (dp[i-2] + v[i]));
    }
    cout<<"Case "<<j<<": "<<dp[n-1]<<endl;
  }

}
    return 0;
}

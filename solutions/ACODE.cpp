#include <bits/stdc++.h>
using namespace std;

long long num(char a, char b) {
  return ((a - '0')*10 + (b - '0'));
}

int main()
{
  string s;
  cin>>s;
  long long dp[5010];
  //memset(dp, 0, sizeof(dp));
  while(s != "0") {
    dp[0]=1; dp[1]=1;
    int len = s.length();
    if(s[0] == '0') {cout<<"0"<<endl; goto h;}
    for(int i=1; i<len; i++) {
      if(s[i] == '0') {
        if(s[i+1] == '0') {cout<<"0"<<endl; goto h;}
        else dp[i+1] = dp[i-1];
      }
      else if (num(s[i-1], s[i]) <= 26 && num(s[i-1], s[i]) > 9){
        dp[i+1] = (dp[i] + dp[i-1]);
      }
      else dp[i+1] = dp[i];
    }
    cout<<dp[len]<<endl;
    h:
    cin>>s;

  }
    return 0;

}

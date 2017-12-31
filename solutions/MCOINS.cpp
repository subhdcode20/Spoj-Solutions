#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k, l, m;
  string ans = "";
  cin>>k>>l>>m;
  int coins[3] = {1, k, l};
  int arr[m];
  for(int i=0; i<m; i++) {
    cin>>arr[i];
  }
  int max = *max_element(arr, arr + m);
  int x = max+5;
  bool wl[x];
  wl[0] = false;
  wl[1] = true;
  wl[k] = true;
  wl[l] = true;
  for(int i=2; i<x; i++) {
    if(i == k || i == l) continue;
    for(int j=0; j<3; j++) {
      if(i - coins[j] >= 0){
        if(wl[i-coins[j]] == false) {wl[i] = true; break;}
        else {
          wl[i] = false;
        }
      }
    }

  }
  for(int i=0; i<m; i++) {
    if(wl[arr[i]] == true) ans += 'A';
    else if(wl[arr[i]] == false)
      ans += 'B';
  }
  cout<<ans<<endl;
return 0;
}

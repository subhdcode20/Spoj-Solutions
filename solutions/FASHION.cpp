#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    int hotmen[n];
    int hotwomen[n];
    for(int i=0; i<n; i++) {
      cin>>hotmen[i];
    }
    for(int i=0; i<n; i++) {
      cin>>hotwomen[i];
    }
    sort(hotmen, hotmen+n);
    sort(hotwomen, hotwomen + n);
    int sum=0;
    for(int i=0; i<n; i++) {
      sum += hotmen[i] * hotwomen[i];
    }
    cout<<sum<<endl;
  }
}

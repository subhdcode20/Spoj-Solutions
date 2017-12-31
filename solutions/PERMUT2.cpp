#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, arr[100005], per[100005];
  cin>>n;
  while(n != 0) {
    int i, flag=0;
    for(i=1; i<=n; i++) scanf("%d", &arr[i]);
    for(i=1; i<=n; i++) {
      if(arr[arr[i]] != i) {flag=1; break;}
    }
    if(flag == 0) {cout<<"ambiguous"<<endl;}
    else if(flag == 1) cout<<"not ambiguous"<<endl;
    cin>>n;
  }
    return 0;
}

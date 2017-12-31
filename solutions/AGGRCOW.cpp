#include <bits/stdc++.h>
using namespace std;

bool adjust(int * arr, int n, int c, int val) {
  int cow = 1;
  int last = arr[0];
  for(int i=1; i<n; i++) {
    if((arr[i] - last) >= val) {
      cow++;
      last = arr[i];
      if(cow==c) return 1;
    }
  }
  return 0;
}

int main() {
  int t;
  cin>>t;
  int n, c;
  int x;
  while(t--) {
    cin>>n>>c;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr + n);
    int l=0, r=arr[n-1], mid;
    while(l<r) {
      mid = l + (r-l)/2;
      if((adjust(arr, n, c, mid)) == 1)
        l = mid+1;
      else
        r = mid;

    }
    cout<<l-1<<endl;

  }
  return 0;
}

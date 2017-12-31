#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, d;
  cin>>a>>d;
  while(a!=0 && d!=0) {
    int arr[a];
    int drr[d];
    for(int i=0; i<a; i++) cin>>arr[i];
    for(int i=0; i<d; i++) cin>>drr[i];
    sort(arr, arr+a);
    sort(drr, drr+d);
    if(arr[0] < drr[1]) cout<<"Y"<<endl;
    else cout<<"N"<<endl;
    cin>>a>>d;
    }
  return 0;
}

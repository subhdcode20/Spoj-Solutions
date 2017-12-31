#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a[5];
    int t=0;
    while(scanf("%lld", &a[0])!= EOF) {
      t++;
      for(int i=1; i<4; i++) {
          cin>>a[i];
      }
      sort(a, a+4);
      long long y = a[2] + a[3];
      printf("Case %d: %lld\n", t, y);
    }
  return 0;
}

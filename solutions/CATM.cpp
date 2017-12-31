#include <bits/stdc++.h>
//#include <string>
using namespace std;

 int main() {
   int n, m;
   cin>>n>>m;
   int k;
   cin>>k;
   while(k--) {
     int mr, mc, c1r, c1c, c2r, c2c;
     cin>>mr>>mc>>c1r>>c1c>>c2r>>c2c;
       if((mc-1) < abs(mr - c1r) + (c1c-1) && (mc-1) < abs(mr - c2r) + (c2c-1)) {
         printf("YES\n");
       }
       else if((m-mc) < abs(mr - c1r) + (m-c1c) && (m-mc) < abs(mr - c2r) + (m-c2c)) {
         printf("YES\n");
       }
       else if((mr-1) < abs(mc - c1c) + (c1r-1) && (mr-1) < abs(mc - c2c) + (c2r-1)) {
         printf("YES\n");
       }
       else if((n-mr) < abs(mc - c1c) + (n-c1r) && (n-mr) < abs(mc - c2c) + (n-c2r)) {
         printf("YES\n");
       }
       else {
         printf("NO\n");
       }
   }
   return 0;
 }

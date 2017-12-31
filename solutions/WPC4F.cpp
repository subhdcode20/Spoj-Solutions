#include <bits/stdc++.h>
using namespace std;
 int main() {
   int t;
   cin>>t;
   int n;
   int arr[21][3];
   while(t--) {
     cin>>n;
     for(int i=0; i<n; i++) {
       for(int j=0; j<3; j++) {
         cin>>arr[i][j];
       }
     }

     for(int i=1; i<n; i++) {
       for(int j=0; j<3; j++) {
         if(j == 0) {
           arr[i][j] = min(arr[i][j] + arr[i-1][1], arr[i][j] + arr[i-1][2]);
         }
         else if(j == 1) {
           arr[i][j] = min(arr[i][j] + arr[i-1][0], arr[i][j] + arr[i-1][2]);
         }
         else if(j == 2) {
           arr[i][j] = min(arr[i][j] + arr[i-1][0], arr[i][j] + arr[i-1][1]);
         }

       }
     }
     cout<<*min_element(arr[n-1], arr[n-1] + 3)<<endl;
   }
   return 0;
 }

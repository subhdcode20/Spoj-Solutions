#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        for(int i=0; i<n; i++) {cin>>a[i];}
        int diff[n-k+1];
        if(k == 1) {cout<<"0"<<endl; continue;}
        sort(a, a+n);
        for(int i=0; i<=n-k; i++){

            diff[i] = a[i+k-1] - a[i];
        }
        if(n == k) {cout<<diff[0]<<endl; continue;}
        sort(diff, diff+(n-k+1));
        cout<<diff[0]<<endl;
    }
    return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++) {
        double r;
        cin>>r;
        long double s;
        s = 4*r*r + (double) 1/4;
        printf("Case %d: %.2f",i,4*r*r+0.25);
        cout<<endl;
    }
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    return b==0 ? a : gcd(b, a%b);
}

int main()
{
    int t;
    cin>>t;
    while(t--) {	AP2.cpp
        int a, b;
        cin>>a>>b;
        int result = abs(a-b);
        result /= abs(gcd(a,b));
        cout<<result<<endl;
    }
    return 0;
}

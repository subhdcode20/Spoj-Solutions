#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b==0 ? a : gcd(b, a%b);
}
int main()
{
    int t;
    cin>>t;
    int a, b;
    while(t--) {
        cin>>a>>b;
        int g = gcd(a, b);
        cout<<b/g<<' '<<a/g<<endl;
    }
    return 0;
}

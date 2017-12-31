#include <iostream>

using namespace std;

long long int cuberoot(long long int a) {
    long long int x = 19 + 25*a;
    long long int y = 10*x + 2;
    return y;
}

int main()
{
    long int t;
    cin>>t;
    while(t--) {
        long long int k;
        cin>>k;
        long long int n;
        n = cuberoot(k-1);
        cout<<n<<endl;
    }
    return 0;
}

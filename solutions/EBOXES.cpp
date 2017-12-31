#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,k,t,f;
        cin>>n>>k>>t>>f;
        int a;
        a = (f-n);
        a /= k-1;
        cout<< n+ (a)*k<<endl;
    }
    return 0;
}

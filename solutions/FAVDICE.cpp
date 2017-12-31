#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        float n;
        cin>>n;
        float sum=0;
        for(int i=1; i<=n; i++) {
            sum += (float)1/i;
        }
        sum *= n;
        printf("%.2f\n", sum);
    }
    return 0;
}

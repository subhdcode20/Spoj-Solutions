#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

long long C(int n, int r)
{
    vector< vector<long long> > C(2,vector<long long> (r+1,0));

    for (int i=0; i<=n; i++)
    {
        for (int k=0; k<=r && k<=i; k++)
            if (k==0 || k==i)
                C[i&1][k] = 1;
            else
                C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k]);
    }
    return C[n&1][r];
}

int main()
{
    int t;
    scanf("%d", &t);
    int n, k;
    while(t--){
        scanf("%d%d", &n, &k);
        cout<<C(n-1, min(k-1, n-k))<<endl;
    }
    return 0;
}

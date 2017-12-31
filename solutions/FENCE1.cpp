#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    while(cin>>n) {
        if(n == 0) break;

        double ans = n*n;
        ans /= 3.14159;
        ans /= 2;
        printf("%.2f\n", ans);
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int level;
    while(n--) {
        cin>>level;
        long long c = 0;
        for(int i=1; i<=level; i++) {
            c += i * 2;
            if(i < level)
            c += i;
        }
        cout<<c%1000007<<endl;
    }

    return 0;
}

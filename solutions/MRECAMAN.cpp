#include <bits/stdc++.h>
using namespace std;

set<int> s;
vector<int> v;
int main()
{
    int n;
    s.insert(0);
    v.push_back(0);
    long long x;
    for(int i=1; i<=500001; i++) {
        x = v[i-1] - i;
        if(x <= 0) {
           x = v[i-1] + i;
        }
        else if(s.find(x) != s.end()) {
            x = v[i-1] + i;
        }
        s.insert( x );
        v.push_back(x);
    }
    while(cin>>n) {
        if(n == -1) break;
        cout<<v[n]<<endl;
    }


    return 0;
}

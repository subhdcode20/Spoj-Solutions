#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n != 0) {
        priority_queue<long long int> a;
        priority_queue<long long int, vector<long long int>, greater<long long int> > b;
        long long int m = n;
        long long int p = n;
        long long int x;
        while(m--) {
            cin>>x;
            a.push(x);
        }
        while(n--) {
            cin>>x;
            b.push(x);
        }
        long long int result=0;
        while(p--) {
            result += a.top() * b.top();
            a.pop(); b.pop();
        }
        cout<<result<<endl;
        cin>>n;
    }
    return 0;
}

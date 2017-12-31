#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int m, n;
        cin>>m>>n;
        priority_queue<int> qv;
        priority_queue<int> qh;
        int x;
        m -= 1; n -= 1;
        while(m--) {cin>>x; qv.push(x);}
        while(n--) {cin>>x; qh.push(x);}
        int count=0;
        int v=1, h=1, l;
        while(!qv.empty() && !qh.empty()) {
            if(qv.top() >= qh.top()) {
                l = qv.top();
                qv.pop();
                count += v*l;
                h++;
            }
            else {
                l = qh.top();
                qh.pop();
                count += h*l;
                v++;
            }
        }
        if(qv.empty() && !qh.empty()) {
            while(!qh.empty()) {
                l = qh.top();
                qh.pop();
                count += h*l;
                v++;
            }
        }
        if(!qv.empty() && qh.empty()) {
            while(!qv.empty()) {
                l = qv.top();
                qv.pop();
                count += v*l;
                h++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

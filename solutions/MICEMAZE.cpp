#include <bits/stdc++.h>

using namespace std;

int n, timer, exitcell;
vector< vector< pair<int, int> > > adj;
vector< int > v;


int bfs(int c) {
    v.resize(n+1);
    for(int i=0; i<=n; i++) {
        v[i] = INT_MAX;
    }
    priority_queue< pair<int, int>, vector< pair<int,int> >, greater< pair<int, int> > > q;
    q.push(make_pair(0, c));
    v[c] = 0;
    while(!q.empty()) {
        pair<int, int> top = q.top();
        q.pop();
        if(top.second == exitcell) break;
        vector< pair<int, int> >::iterator it;
        for(it = adj[top.second].begin(); it != adj[top.second].end(); it++) {
            if(it->second + v[top.second] < v[it->first]) {
                v[it->first] = it->second + v[top.second];
                q.push(make_pair(v[it->first] , it->first));
            }
        }
    }
    return v[exitcell];
}

int main()
{
    cin>>n>>exitcell>>timer;
    int m, x, y, z;
    cin>>m;
    adj.clear();
    adj.resize(n+1);

    while(m--) {
        cin>>x>>y>>z;
        adj[x].push_back(make_pair(y, z));
    }
    int t=0, result=0;
    for(int i=1; i<=n; i++) {
        t = bfs(i);
        if(t <= timer)  {
            result++;
        }
    }
    cout<<result<<endl;

    return 0;
}

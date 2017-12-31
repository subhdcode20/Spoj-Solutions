#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > adj(1005);
bool visited[1005];
queue<int> q;

void dfs(int node) {
  visited[node] = true;
  cout<<node<<" ";
vector<int> :: iterator it;
  for(int i=0; i<adj[node].size(); i++) {
    if(!visited[adj[node][i]]) dfs(adj[node][i]);
  }
}

void bfs(int node) {
  q.push(node);
  while(!q.empty()) {
    int top = q.front();
    q.pop();
    if(!visited[top]) {
      visited[top] = true;
      cout<<top<<" ";
      for(int i=0; i<adj[top].size(); i++) {
        if(!visited[adj[top][i]]) q.push(adj[top][i]);
      }
    }
  }
}

int main() {
  int t;
  cin>>t;
  int n;
  for(int tc=1; tc<=t; tc++) {
    adj.clear();
    cin>>n;
    adj.resize(n+1);
    int node, num, x;
    while(n--) {
      cin>>node;
      cin>>num;
      if(num == 0) continue;
      while(num--) {
        cin>>x;
        adj[node].push_back(x);
      }
    }
    int start, d_b;
    cin>>start>>d_b;
    cout<<"graph "<<tc<<endl;
    while(1) {
      if(start == 0 && d_b == 0) break;
      memset(visited, false, sizeof(visited));
      if(d_b == 0) {
        dfs(start);
      }
      else if(d_b == 1) {

        bfs(start);
      }
      cout<<endl;
      cin>>start>>d_b;
    }
  }
  return 0;
}

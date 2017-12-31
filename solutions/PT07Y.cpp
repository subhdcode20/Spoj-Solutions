#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > adj(10005);
bool visited[10005];

void dfs(int val) {
  visited[val] = true;
  vector<int> :: iterator il;
  for(il=adj[val].begin(); il!=adj[val].end(); il++) {
    if(!visited[*il]) dfs(*il);
  }
}

int main() {
  int n, m;
  cin>>n>>m;
  memset(visited, false, sizeof(visited));
  int x, y;
  for(int i=0; i<m; i++) {
    cin>>x>>y;
    adj[x].push_back(y);
  }
  int cc=0;
  for(int i=1; i<=n; i++) {
    if(!visited[i]) {
        dfs(i);
        cc++;
    }
  }
  if(cc == 1 && (n-m) == 1) printf("YES\n");
  else printf("NO\n");


  return 0;
}

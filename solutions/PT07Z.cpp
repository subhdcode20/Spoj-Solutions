#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > adj(10001);
int maxnode;
int depth[10001];
bool visited[10001];

int bfs(int u) {
	queue< pair<int, int> > q;
	int d;
	q.push(make_pair(u, 0));
	while(!q.empty()) {
		int node = q.front().first;
		d = q.front().second;
		visited[node] = true;
		for(int i=0; i<adj[node].size(); i++) {
			if(!visited[adj[node][i]]) {
				q.push(make_pair(adj[node][i], d + 1));
			}
		}
		depth[node] = d;
		q.pop();
	}
}


int main()
{
	int n;
	cin>>n;
	int a, b;
	for(int i=0; i<n-1; i++) {
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	bfs(1);
	maxnode = 1;
	for(int i=1; i<=n; i++) {
		maxnode = depth[i] > depth[maxnode] ? i : maxnode;
	}
	memset(depth, 0, sizeof(depth));
	memset(visited, false, sizeof(visited));

	bfs(maxnode);
	maxnode = 0;
	for(int i=1; i<=n; i++)
		maxnode = max(maxnode, depth[i]);
	cout<<maxnode<<endl;

    return 0;
}

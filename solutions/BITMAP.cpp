#include <bits/stdc++.h>
using namespace std;
int g[200][200];
#define INF 1000000
int bfs(int x, int y) {
  queue<int> q;
  q.push(x);
  q.push(y);
  g[x][y] = 0;

  while(!q.empty()) {
    int i=q.front();
    q.pop();
    int j=q.front();
    q.pop();
    int dist = g[i][j] + 1;

    if(j-1>=0 && dist < g[i][j-1]) {
      q.push(i); q.push(j-1);
      g[i][j-1] = dist;
    }
    if(j+1>=0 && dist < g[i][j+1]) {
      q.push(i); q.push(j+1);
      g[i][j+1] = dist;
    }
    if(i-1>=0 && dist < g[i-1][j]) {
      q.push(i-1); q.push(j);
      g[i-1][j] = dist;
    }
    if(i+1>=0 && dist < g[i+1][j]) {
      q.push(i+1); q.push(j);
      g[i+1][j] = dist;
    }
  }
}

 int main() {
   int t;
   cin>>t;
   int n, m;
   while(t--) {
     cin>>n>>m;
     vector< pair<int, int> > v;
     char c;
     for(int i=0; i<n; i++) {
       for(int j=0; j<m; j++) {
         cin>>c;
         if(c == '1') {
           g[i][j] = -INF;
           v.push_back(make_pair(i, j));
         }
         else g[i][j] = INF;
       }
     }
     for(int i=0; i<v.size(); i++) {
       bfs(v[i].first, v[i].second);
     }
     for(int i=0; i<n; i++) {
       for(int j=0; j<m; j++) {
         cout<<g[i][j]<<" ";
       }
       cout<<endl;
     }

   }
   return 0;
 }

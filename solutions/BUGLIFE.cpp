#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > sex(2002);
int gen[2002];
queue<int> q;

int main() {
  int t;
  cin>>t;
  for(int tc=1; tc<=t; tc++) {
    int n, m;
    scanf("%d%d", &n, &m);
    int x, y;
    for(int i=0; i<=n; i++) {sex[i].clear();}
    for(int i=0; i<m; i++) {
      scanf("%d%d", &x, &y);
      sex[x].push_back(y);
      sex[y].push_back(x);
    }
    if(q.empty() == false) {
      while(q.size() != 0) {
        q.pop();
      }
    }
    memset(gen, 0, sizeof(gen));
    bool ans=true;
    printf("Scenario #%d:\n", tc);
    for(int j=1; j<=n; j++) {
      if(gen[j] == 0) {
        //cout<<"push="<<j<<endl;
        q.push(j);
        gen[j] = 1;
        //cout<<"gen "<<j<<"="<<gen[j]<<endl;
        //cout<<"size="<<q.size()<<endl;
        while(!q.empty()) {
          //cout<<"hi"<<endl;
          int v = q.front();
          //cout<<"v="<<v<<endl;
          q.pop();
          for(int i=0; i<sex[v].size(); i++) {
            int a = sex[v][i];
            //cout<<"a="<<a<<endl;
            if(gen[a] == 0) {
              q.push(a);
              //cout<<"push  = "<<a<<endl;
              gen[a] = -gen[v];
              //cout<<"gen "<<a<<"  =  "<<gen[a]<<endl;
            }
            else if(gen[a] == gen[v]) {
              ans = false;
              //cout<<"FALSE gen "<<a<<" = gen "<<v<<endl;
              //cout<<"goto"<<endl;
              goto res;
            }

          }
        }
        //cout<<"empty"<<endl;
      }
    }
    res:
    if(ans)
      printf("No suspicious bugs found!\n");
    else
      printf("Suspicious bugs found!\n");
  }
  return 0;
}

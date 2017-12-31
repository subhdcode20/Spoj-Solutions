#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char g[10001][10001];
int visited[10001][10001];
int trap=0;
int z=1;
void trav(int i, int j) {
    if(visited[i][j] == 0) {
        visited[i][j] = z;
    }
    else {
      if(visited[i][j] == z) {
        return;
      }
      else {
        trap--;
        return;
      }
    }
        if(g[i][j] == 'N') { trav(i-1, j);}
        else if(g[i][j] == 'S') { trav(i+1, j);}
        else if(g[i][j] == 'W') { trav(i, j-1);}
        else if(g[i][j] == 'E') { trav(i, j+1);}

    return;
}

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++) {
      scanf("%s", g[i]);
    }
    memset(visited, 0, sizeof(visited));


    for(int p=0; p<n; p++) {
        for(int q=0; q<m; q++) {
            if(visited[p][q] != 0) continue;
            else {
              trav(p, q);
              trap++;
              z++;
            }
        }
    }
    printf("%d\n", trap);
    return 0;
}

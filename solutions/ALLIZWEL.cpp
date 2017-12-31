#include <bits/stdc++.h>
using namespace std;


char ar[100][100];
int visited[100][100];
string str = "ALLIZZWELL";
bool found;
int h,w;

void dfsTraversal(int r,int col, int ch)
{
     if(ch == 10) {
       found = true; return;
     }
     int rr[8]={-1,-1,-1,0,0,1,1,1};
     int cc[8]={-1,0,1,-1,1,-1,0,1};

     for(int i=0;i<8;++i)
     {
        if(found == true) return;

          int x=r+rr[i];
          int y=col+cc[i];

          if((x>=0 && x<h) && (y>=0 && y<w) && !visited[x][y])
          {

               if(ar[x][y] == str[ch])
               {
                    visited[x][y]=1;
                    dfsTraversal(x,y,ch+1);
               }
          }
     }
     visited[r][col] = 0;
}

int main() {

     int t;
     cin>>t;
     while(t--)
     {
       scanf("%d%d",&h,&w);
       found = false;
          for(int i=0;i<h;++i)
               for(int j=0;j<w;++j)
               {
                    cin>>ar[i][j];
                    visited[i][j]=0;
               }

          for(int i=0;i<h;++i) {
              if(found == true) break;

              for(int j=0;j<w;++j)
              {
                  if(found == true) break;
                  if(ar[i][j]=='A')
                  {
                    visited[i][j]=1;
                    dfsTraversal(i,j,1);
                  }
              }
          }
          if(found == true) printf("YES\n");
          else
            printf("NO\n");
     }
     return 0;
}

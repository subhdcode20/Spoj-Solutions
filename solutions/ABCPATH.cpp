#include <bits/stdc++.h>
using namespace std;


char ar[50][50];
int visited[50][50];
int ans=0;
int h,w;

void dfsTraversal(int r,int col, int Depth)
{
     ans=max(Depth,ans);

     int rr[8]={-1,-1,-1,0,0,1,1,1};
     int cc[8]={-1,0,1,-1,1,-1,0,1};

     for(int i=0;i<8;++i)
     {
          int x=r+rr[i];
          int y=col+cc[i];

          if((x>=0 && x<h) && (y>=0 && y<w) && !visited[x][y])
          {

               if(ar[x][y]== ar[r][col] + 1)
               {
                    visited[x][y]=1;
                    dfsTraversal(x,y,Depth+1);
               }
          }
     }
}

int main() {

     scanf("%d%d",&h,&w);
     int t=0;
     while(h && w)
     {
          ans=0;
          t++;
          for(int i=0;i<h;++i)
               for(int j=0;j<w;++j)
               {
                    cin>>ar[i][j];
                    visited[i][j]=0;
               }
          for(int i=0;i<h;++i)
               for(int j=0;j<w;++j)
               {
                    if(ar[i][j]=='A')
                    {
                         visited[i][j]=1;
                         dfsTraversal(i,j,1);
                    }
               }
          printf("Case %d: %d\n",t,ans);
          scanf("%d%d",&h,&w);
     }
     return 0;
}

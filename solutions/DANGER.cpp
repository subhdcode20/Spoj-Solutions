#include <bits/stdc++.h>
using namespace std;

int main()
{
char a[5];
scanf("%s\n", &a);
while(!(a[0]-'0'==0 && a[1]-'0'==0)) {
  int n;
  n=((int)a[0]-'0')*10 + (int)a[1]-'0';
  n *= (int)pow(10, (float)a[3]-'0');
  int x=1;
  while(x<=n) x <<= 1;
  printf("%d\n", 1+((n-(x>>1))<<1));
  cin>>a;
}
    return 0;
}

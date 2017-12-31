#include <bits/stdc++.h>
using namespace std;

int md = 1000000007;
void multiply(long long F[2][2], long long M[2][2]);
void power(long long F[2][2], int n);

/* function that returns nth Fibonacci number */
long long fib(int n)
{
  long long F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}

/* Optimized version of power() in method 4 */
void power(long long F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  long long M[2][2] = {{1,1},{1,0}};
  power(F, n/2);
  multiply(F, F);
  if (n%2 != 0)
     multiply(F, M);
}

void multiply(long long F[2][2], long long M[2][2])
{
  long long x =  (F[0][0]*M[0][0]%md + F[0][1]*M[1][0]%md)%md;
  long long y =  (F[0][0]*M[0][1]%md + F[0][1]*M[1][1]%md)%md;
  long long z =  (F[1][0]*M[0][0]%md + F[1][1]*M[1][0]%md)%md;
  long long w =  (F[1][0]*M[0][1]%md + F[1][1]*M[1][1]%md)%md;
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, m;
    cin>>n>>m;
    long long fn, fm;
    fn = fib(n+1) - 1;    //sum of f(0)+f(1)+f(2)..f(n) pattern
    fm = fib(m+2) - 1;    //sum of f(0)+f(1)+f(2)..f(m) pattern
    if(fn > fm) cout<<md + (fm-fn)<<endl;
    else
      cout<<(fm%md - fn%md)%md<<endl;
  }
  return 0;
}

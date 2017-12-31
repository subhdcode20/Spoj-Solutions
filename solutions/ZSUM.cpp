#include <bits/stdc++.h>

using namespace std;
double n,k;

long long int modularexponentiation(long long int b, long long int e) {
  long long int result = 1;
  b = b % 10000007;
  while(e>0) {
    if(e%2 == 1) result = (result * b) % 10000007;
    e = e >> 1;
    b = (b*b) % 10000007;
  }
  return result;
}

long long int z(long long int m) {
    long long int p = m;
    long long int x,result=0;

      x = 2 * modularexponentiation(p-1, k);
      result = (result + x) % 10000007;
      x = modularexponentiation(p, k);
      result = (result + x) % 10000007;
      x = 2 * modularexponentiation(p-1, p-1);
      result = (result + x) % 10000007;
      x = modularexponentiation(p, p);
      result = (result + x) % 10000007;
    return result;
}

int main()
{
    cin>>n>>k;
    while(n != 0 && k != 0) {
      long long int sum=0;
      sum += z(n);
      cout<<sum<<endl;
      cin>>n>>k;
    }
    return 0;
}

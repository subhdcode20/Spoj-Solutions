#include <bits/stdc++.h>
using namespace std;

long long int inversions;
int a[2000000], b[2000000];
void mergeNcount(int l, int r) {
        if(l==r) return;
        int m = (l+r)/2;
        mergeNcount(l, m);
        mergeNcount(m+1, r);
        int i=l, j=m+1, k=0;
        while(i<=m && j<=r) {
          if(a[i]>a[j]) {
            b[k] = a[j];
            inversions+=(m-i)+1;
            j++; k++;
          }
          else {b[k] = a[i]; i++; k++;}
        }
        while(i<=m) { b[k] = a[i]; k++; i++;}
        while(j<=r) {b[k] = a[j]; j++; k++;}
        for(int i=l; i<=r; i++) {
          a[i] = b[i-l];
        }
        return;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        inversions = 0;
        int n;
        scanf("%d", &n);
        for(int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        mergeNcount(0, n-1);
        printf("%lld\n", inversions);
    }

    return 0;
}

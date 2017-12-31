#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int v[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    sort(v,v+n);
    int l, r, mid;
    int count=0;
    for(int s=0; s<(n-1); s++) {
        l = s+1; r=n-1;
        while(l <= r) {
            mid = (l+r)/2;
            if(v[s]+k ==  v[mid]) {count++; break;}
            else if(v[s]+k < v[mid]) {r = mid-1;}
            else if(v[s]+k > v[mid]) {l = mid+1;}
        }
    }
    printf("%d", count);
    return 0;
}

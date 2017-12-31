#include <iostream>
#include <cstdio>
#include <set>
#include <map>
#include <algorithm>

using namespace std;
#define size 10001

int n, m;
int a[size];
int suma[size];
int b[size];
int sumb[size];

int b_search(int x) {
    int p=0, q=m-1, mid;
    while(p<=q) {
        mid = (p+q)/2;
        if(b[mid] == x) {
            return mid;
        }
        else if(b[mid] > x) {
            q = mid - 1;
        }
        else {
            p = mid + 1;
        }
    }
    return -1;
}

int main()
{

    scanf("%d", &n);
    while(n != 0) {

        int sum = 0;
        for(int i=0; i<n; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
            suma[i] = sum;
        }
        scanf("%d", &m);
        sum = 0;
        for(int i=0; i<m; i++) {
            scanf("%d", &b[i]);
            sum += b[i];
            sumb[i] = sum;
        }
        int ans=0;
        int y=0,pos,pos1,l2,l1;
        for(int i=0; i<n; i++) {
            pos = b_search(a[i]);

            if(pos > -1) {
               pos1 = i;
               y++;
               if(y==1) {
                 ans += max(suma[pos1], sumb[pos]);
               }
               else {
                ans += max((suma[pos1] - suma[l1]), (sumb[pos] - sumb[l2]));
               }
                l1 = pos1;
                l2 = pos;
            }
        }
        if(y>0) {
            ans += max((suma[n-1] - suma[l1]), (sumb[m-1] - sumb[l2]));
        }
        else {
            ans += max(suma[n-1], sumb[m-1]);
        }
        printf("%d\n", ans);
        scanf("%d", &n);
     }
    return 0;
}

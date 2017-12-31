#include <iostream>
#include <cstdio>h
#include <cmath>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int a[1000], b[1000];
    while(t--) {
        int n, m;
        scanf("%d", &n);
        for(int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        scanf("%d", &m);
        for(int i=0; i<m; i++) {
            scanf("%d", &b[i]);
        }
        int diff = abs(a[0] - b[0]);
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(abs(a[i] - b[j]) < diff) {
                    diff = abs(a[i] - b[j]);
                }
            }
        }
        printf("%d\n", diff);
    }
    return 0;
}

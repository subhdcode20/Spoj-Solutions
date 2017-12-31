#include <iostream>
#include <cstdio>
#include <map>
#include <set>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    printf("\n");
    int n;
    while(t--) {
        scanf("%d", &n);
        int x;
    	printf("\n");
        map<int, int> m;
        for(int i=0; i<n; i++) {
            scanf("%d", &x);
            if(m.find(x) != m.end()) {
               m.find(x)->second += 1;
               continue;
            }
            m.insert(pair<int, int>(x, 1));
        }
        map<int, int>::iterator it;
        int flag = 0;
        for(it = m.begin(); it!=m.end(); it++) {
            if(it->second > n/2) {
                flag = 1; break;
            }
        }
        if(flag == 1) {
            printf("YES %d\n\n", *it);
        }
        else {
                printf("NO\n\n");
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000000];
    int j=0;
    while(scanf("%s", s) != EOF) {
        int count=0;
        for(int i=1; i<strlen(s); i++) {
            if(s[i] != s[i-1]) count++;
        }
        if(s[0] == '1') {printf("Game #%d: %d\n", ++j, count+1);}
        else printf("Game #%d: %d\n", ++j, count);
    }
    return 0;
}

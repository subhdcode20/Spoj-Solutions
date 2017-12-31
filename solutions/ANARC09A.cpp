#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    char s[2001];
    int t=0;
    scanf("%s", &s);
    while(s[0] != '-') {
        t++;
        int count=0,extra=0;
        int i = 0;
        if(s[0] == '}') {extra++; s[0]='{';}
        if(s[strlen(s)-1] == '{') {extra++; s[strlen(s)-1] = '}';}
        while(s[i]!='\0') {
            if(s[i] == '{') {
                count++; i++;
            }
            if(s[i] == '}') {
                if(count>0) {count--; i++;}
                else if(count == 0) {extra++; count++; i++;}
            }
        }
        count = (count/2 + extra);
        printf("%d. %d\n", t, count);
        scanf("%s", &s);
    }
    return 0;
}

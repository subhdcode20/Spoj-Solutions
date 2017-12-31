#include<cstdio>
#include<iostream>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    cin>>s1>>s2;
    while(s1 != "*") {
        int count = 0;
        int i=0;
        if(s1 == s2) {printf("0\n"); goto h;}
        else {
            while(i<s1.size()) {
                if(s1[i] != s2[i]) {
                    while(s1[i] != s2[i] && i<s1.size()) {
                        s1[i] = s2[i]; i++;
                    }
                    count++;
                }
                else {
                    i++;
                }
            }
        }
        printf("%d\n", count);
        h:
        cin>>s1>>s2;
    }
    return 0;
}

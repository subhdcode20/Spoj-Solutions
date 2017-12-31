#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
        vector<int> p;
        p.push_back(2);
        for(int i=3; i<=sqrt(1000000000); i+=2) {
            bool isprime = true;
            int cap = sqrt(i);
            vector<int> :: iterator iter;
            for(iter=p.begin(); iter!=p.end(); iter++) {
                if(*iter > cap) {break;}
                if(i % *iter == 0) {isprime = false;break;}
            }
            if(isprime) {p.push_back(i);}
        }
    while(t--) {
        int a,b;
        scanf("%d%d", &a, &b);
        bool arr[b-a+1];
        for(int i=0; i<b-a; i++) {arr[i] = true;}
        int cap = sqrt(b);
        vector<int> :: iterator iter;
        for(iter=p.begin(); iter!=p.end(); iter++) {
            if(*iter > cap) {break;}
            int x;
            if(*iter >= a) {
                x = *iter * 2;
            }
            else {
                x = a + ((*iter - a % *iter) % *iter);
            }
            for(int j=x; j<=b; j+=(*iter)) {
                arr[j-a] = false;
            }
        }
        for(int i=0; i<b-a+1; i++) {
            if(arr[i] == true && i+a != 1) {
                printf("%d\n", i+a);
            }
        }
        printf("\n");
    }
    return 0;
}

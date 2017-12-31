#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int gcd(int a, int b) {
    return b==0 ? a : gcd(b, a%b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int g = gcd(a, b);
        int count=0;
        for(int i=1; i<=sqrt(g); i++) {
            if(g % i == 0) {
                count+=2;
            }
            if(i == (float)g/i) count--;
        }
        printf("%d\n", count);
    }
    return 0;
}

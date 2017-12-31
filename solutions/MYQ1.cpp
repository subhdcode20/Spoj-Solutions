#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        double n;
        scanf("%lf", &n);
        long long row;
        if(n == 1) { printf("poor conductor\n"); continue;}
        else {

                row = ceil((n-1)/5);
        }


        if((int)n%10 == 1 || (int)n%10 == 2) printf("%lld W L\n", row);
        else if((int)n%10 == 0 || (int)n%10 == 3) printf("%lld A L\n", row);
        else if((int)n%10 == 4 || (int)n%10 == 9) printf("%lld A R\n", row);
        else if((int)n%10 == 5 || (int)n%10 == 8) printf("%lld M R\n", row);
        else if((int)n%10 == 6 || (int)n%10 == 7) printf("%lld W R\n", row);
    }
    return 0;
}

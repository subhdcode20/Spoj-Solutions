#include <iostream>

using namespace std;

int isprime(int N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(int i=3; i*i<=N; i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}

int factors(int a, int b) {
    int fac = a/b;
    int count = 1;
    while(fac >= b && fac%b == 0) {
        count++;
        fac /= b;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;

    for(int i=2; i<=n; i++) {
        if(i == 2 || i == 3 || i == 5 || i == 7 ) {goto here;}
        isprime(i);
        if(isprime(i)) {
            here:
            if(i != 2) {cout<<" * ";}
            int x = n/i;
            if(x < i) {
                cout<<i<<"^"<<x;
            }
            else {
                int p = i;
                int f = 0;
                while(x--) {
                    f += factors(p, i);
                    p += i;
                }

                cout<<i<<"^"<<f;
            }

        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n, count=0;
    cin>>n;
    if(n == 1 ) {
        cout << 1;
    }
    else if (n == 2) {
        cout << 2;
    }
    else {
        for(int j = 1; j <= n; j++) {
            int sq=0, flag=0;
            for(int i = 1; i <= j/2; i++) {
                if(j%i == 0) {
                    sq++;
                }
                if(i*i == j) {
                    flag = 1;
                }
            }
            if(flag == 1) {
                count += ((sq-2)/2) + 2;
            }
            if(flag == 0) {
                count += ((sq-1)/2) + 1;
            }
        }
        cout<<count;
    }

    return 0;
}

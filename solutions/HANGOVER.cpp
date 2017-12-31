#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n;
    while(cin>>n) {
        if(n == 0.00) break;
        float sum = 0.00;
        int x = 2;
        while(n > sum) {

            float y = (float)1/x;
            sum += y;
            sum = sum * 100;
            sum /= 100;
            x++;
        }
        cout<<x-2<<" card(s)"<<endl;
    }

    return 0;
}

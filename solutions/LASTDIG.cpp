#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a;
        long int b;
        long long int product;
        cin>>a>>b;
        if(a == 0) {product = 0;}
        else if(b == 0) {product = 1;}
        else {
            a %= 10;

            int newb = b%4;
            if(newb == 0) {
                product = pow(a, 4);
            }
            else {
                product = pow(a, newb);
            }
            product %= 10;
        }

        cout<<product<<endl;
    }
    return 0;
}

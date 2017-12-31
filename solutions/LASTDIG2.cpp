#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string a;
        cin>>a;
        //getline(cin, a);
        signed long long int b;
        cin>>b;
        int product;
        int aa = a[a.length()-1] - '0';
        if(b == 0) {cout<<"1"<<endl;}
        else if(aa == 0) {cout<<"0"<<endl;}
        else {
            b %= 4;
            if(b == 0) {product = pow(aa, 4);}
            else {product = pow(aa, b);}

            product %= 10;
            cout<<product<<endl;
        }

    }
    return 0;
}

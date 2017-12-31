#include <iostream>

using namespace std;

int main()
{
    int t, n, a[200], m;
    cin>>t;
    while(t--) {
        a[0] = 1;
        m = 1;//m is no of digits in array
        cin>>n;
        for(int i=n; i>=1; i--) {
            int carry = 0;
            for(int j=0; j<= m-1; j++) {

                int mul = a[j]*i + carry;
                a[j] = mul % 10;
                carry = mul / 10;

            }
            while(carry != 0) {
                m++;
                a[m-1] = carry % 10;
                carry = carry/10;
            }
        }
        //print factorial
        for(int i=m-1; i>=0; i--) {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}

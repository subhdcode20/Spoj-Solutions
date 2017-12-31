#include <iostream>
using namespace std;

int main() {
	long int t, a, b, sum;
    cin>>t;
    //cout<< reverse(t)<<endl;
    while(t--) {
        cin>>a>>b;
        long int ar = 0, br = 0, sumr = 0;
        while(a > 0)
        {

              ar = (ar * 10) + a % 10;

              a = a / 10;

        }
        //cout<< ar<<endl;
        while(b > 0)
        {

              br = (br * 10) + b % 10;

              b = b / 10;
        }
        //cout<<br<<endl;
        sum = ar + br;
        //cout<<sum<<endl;
        while(sum)
        {

              sumr = (sumr * 10) + sum % 10;

              sum = sum / 10;
        }
        cout<<sumr<<endl;
    }
	return 0;
}

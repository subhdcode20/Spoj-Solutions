#include <string>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int gcd(int a, int b) {
    return b==0 ? a : gcd(b, a%b);
}

int main() {
    int t,len;
    string avg;
    cin>>t;
    while (t--) {
        cin>>avg;
        len = avg.length();
        int decFlag =0;
        int c=0;
        for(int i = len - 1; i >= 0; i--) {
            if(avg[i] == '.') {
                decFlag = 1;
                break;
            }
            else {
                c++;
            }
        }
        int number = 0;
        if(decFlag) {
            for(int i = 0; i < len; i++) {
                if(avg[i] != '.') {
                    number = number * 10 + avg[i] - '0';
                    //cout<<number<<"  ";
                }
            }
            int power = pow(10,c);
            //cout<<power<<endl;
            int x = gcd(number, power);
            cout<<power/x<<endl;
        }
        else {
            cout<<"1"<< endl;
        }
    }


    return 0;

}

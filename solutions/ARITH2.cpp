#include <iostream>
using namespace std;

int main() {

	// your code here
	int t;
    cin>>t;
    while(t--) {
        long long int a, b, res;
        char op;
        cin>>a;
        res = a;
        cin>>op;
        while(op != '='){

            cin>>b;
            switch(op) {
                case '+' : res += b; break;
                case '-' : res -= b; break;
                case '/' : res /= b; break;
                case '*' : res *= b; break;
                case '%' : res %= b; break;
                case '=' : break;
            }
            cin>>op;
        }
        cout<<res<<endl;
    }
	return 0;
}

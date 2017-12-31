#include <iostream>
using namespace std;

int main() {

	// your code here
	long long int n;
    cin>>n;
    int count = 0;
    while (n>1) {
        if(n%2 == 0) {
            n /= 2;
        }
        else {
            count = 1; break;
            n = n*3 + 3;
        }
    }
    if( count == 0) {
        cout<<"TAK"<<endl;
    }
    else {
        cout<<"NIE"<<endl;
    }
	return 0;
}

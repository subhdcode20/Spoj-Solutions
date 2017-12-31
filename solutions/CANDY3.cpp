#include <iostream>
using namespace std;

int main() {

	// your code here
	long long int t,c;
    cin>>t;
    while(t--) {
        long long int total=0,n;
        cin>>n;
        for(int i=0; i<n;i++) {
            cin>>c;
            total = ((total%n) + (c%n))%n;
        }
        if(total%n == 0) {
            cout<< "YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}

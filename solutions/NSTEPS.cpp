#include <iostream>
using namespace std;

int main() {

	// your code here
	int t , x, y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        if (x%2 == 0 || x == 0) {
            if (y == x || y == x-2) {
                cout<<x+y<<endl;
            }
            else {
                cout<<"No Number"<<endl;
            }
        }
        else {
            if (y == x || y == x-2) {
                cout<<x+y-1<<endl;
            }
            else {
                cout<<"No Number"<<endl;
            }
        }
    }
	return 0;
}

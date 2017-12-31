#include <iostream>
using namespace std;

int main() {

	// your code here
	int t;
    cin>>t;
    while(t--) {
        long long int t3, tl3, sum;
        cin>>t3>>tl3>>sum;
        long long int n, a, d;
        n = 2*sum/(t3+tl3);
        cout<<n<<endl;
        d = (tl3 - t3)/(n - 5);
        a = t3 - 2*d;
        while(n--) {
            cout<<a<<" ";
            a += d;
        }
    }
	return 0;
}

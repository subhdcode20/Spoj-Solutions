#include <iostream>
#include <cmath>
using namespace std;

int main() {

	// your code here
	 int t, sqInEachSide;
    cin >> sqInEachSide;
    while(sqInEachSide) {
        long noOfSq=0;
        for(int i=1; i<=sqInEachSide; i++) {
            noOfSq += pow((sqInEachSide-i+1), 2);
        }
        cout<< noOfSq<<endl;
        cin>>sqInEachSide;

    }
    return 0;

}

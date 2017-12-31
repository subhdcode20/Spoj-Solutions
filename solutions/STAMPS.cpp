#include <iostream>
using namespace std;

int main() {

	// your code here
	int t;
    cin>>t;
    int scenerio = 0;
    while(t--) {
        scenerio++;

        int stamps, friends, a[1000];
        cin>>stamps>>friends;
        for(int i=0; i<friends; i++) {
            cin>>a[i];
        }
        for(int i=1; i<friends; i++) {
            int key = a[i];
            int j = i-1;
            while(j>=0 && key < a[j]) {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = key;
        }

        int noOfStamps = 0;
        noOfStamps += a[friends-1];
        int count = 1;
        int diff = 0;
        diff = stamps - noOfStamps;
        for(int i=friends-2; i>=0 && diff>0; i--) {

            noOfStamps += a[i];
            diff = stamps - noOfStamps;
            count++;
            if(diff <= 0) {break;}
        }
        if(diff > 0){
            cout<<"Scenario #"<<scenerio<<":"<<endl;
            cout<<"impossible"<<endl;
        }
        else {
            cout<<"Scenario #"<<scenerio<<":"<<endl;
            cout<<count<<endl;
        }

    }
	return 0;
}

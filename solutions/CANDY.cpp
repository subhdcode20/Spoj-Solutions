#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int candy[10000];
    while(N != -1) {
        int total=0;
        for(int i=0; i<N; i++) {
            cin>>candy[i];
            total += candy[i];
        }
        if(total%N == 0) {
            int moves = 0;
            int avg = total/N;
            for(int i=0; i<N; i++) {
                if(candy[i]<avg) {
                    moves += (avg - candy[i]);
                }
            }
            cout<<moves<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
        cin>>N;
    }
    return 0;
}

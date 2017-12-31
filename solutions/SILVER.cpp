#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!= 0) {
        int count=0;
        while(n>1) {
            n /= 2;
            count++;
        }
        cout<<count<<endl;
        cin>>n;
    }
    return 0;
}

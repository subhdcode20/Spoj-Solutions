#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        if(n==m) {
            if(n % 2 == 0) cout<<'L'<<endl;
            else
            cout<<'R'<<endl;
        }

        else if(n == 1) cout<<'R'<<endl;
        else if(m == 1) cout<<'D'<<endl;
        else if(n == 2) cout<<'L'<<endl;
        else if(m == 2) cout<<'U'<<endl;
        else if(n<m && n%2 == 0) cout<<'L'<<endl;
        else if(n<m && n%2 != 0) cout<<'R'<<endl;
        else if(n>m && m%2 == 0) cout<<'U'<<endl;
        else if(n>m && m&2 != 0) cout<<'D'<<endl;
    }
    return 0;

}

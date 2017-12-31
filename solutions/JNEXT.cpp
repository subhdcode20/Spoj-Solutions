#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v;
        int x;
        for(int i=0; i<n; i++) {
            cin>>x;
            v.push_back(x);
        }
        bool check;
        check = next_permutation(v.begin(), v.end());
        if(check == true) {
            vector<int>::iterator it;
            for(it=v.begin(); it!=v.end(); it++) {
                cout<<*it;
            }
            cout<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}

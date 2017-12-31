#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2;
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    vector<int> arr4;
    int a,b,c,d;

    for(int i=0; i<n; i++) {
        cin>>a>>b>>c>>d;
        arr1.push_back(a);
        arr2.push_back(b);
        arr3.push_back(c);
        arr4.push_back(d);
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            v1.push_back(arr1[i] + arr2[j]);
            v2.push_back(arr3[i] + arr4[j]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector<int>::iterator low,up;
    long long int ans = 0;
    for(int i=0; i<v1.size(); i++) {
        int x = v1[i];
        x *= -1;
        low = lower_bound(v2.begin(), v2.end(), x);
        up = upper_bound(v2.begin(), v2.end(), x);
        ans += (up - low);
    }
    cout<<ans<<endl;
    return 0;
}

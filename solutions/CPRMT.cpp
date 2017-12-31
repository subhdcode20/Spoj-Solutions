#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    while(scanf("%d", &x) != EOF) {
        string a, b;
        vector<char> v;
        cin>>a>>b;
        string::iterator it;
        for(int i=0; i<a.size(); i++) {
            int pos = b.find(a[i]);
            if(pos != string::npos) {
                v.push_back(a[i]);
                b.erase(pos, 1);
            }
        }
        sort(v.begin(), v.end());
        vector<char>::iterator tr;
        for(tr=v.begin(); tr!=v.end(); tr++) {
            printf("%c", *tr);
        }
        printf("\n");
        v.clear();
    }
    return 0;
}

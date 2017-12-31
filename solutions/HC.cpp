#include<cstdio>
#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, l=0, h=0;
        cin>>n;
        string str;
        while (n--) {
            cin>>str;
            if(str == "lxh") l++;
            else h++;
        }
        if((l & 1)) cout<<"lxh"<<endl;
        else cout<<"hhb"<<endl;
    }

    return 0;
}

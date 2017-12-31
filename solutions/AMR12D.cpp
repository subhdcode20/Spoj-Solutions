#include <bits/stdc++.h>

using namespace std;

string reverse_str(string st) {
    string st_rev(st.size(), 'x');
    string::reverse_iterator rit;
    int j=0;
    for(rit=st.rbegin(); rit!=st.rend(); rit++) {
        st_rev[j++] = *rit;
    }
    return st_rev;
}

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--) {
        cin>>s;
        if(s.size() == 1) {cout<<"YES"<<endl ; continue;}
        if(s.size() == 2) {
            if(s[0] == s[1]) {cout<<"YES"<<endl; continue;}
            else {cout<<"NO"<<endl; continue;}
        }
        int flag = 1;
        for(int i=0; i<s.size(); i++) {
            for(int j=2; j<(s.size() - i); j++) {
                string str = s.substr(i, j);
                str = reverse_str(str);
                if(s.find(str) == std::string::npos) {cout<<"NO"<<endl; flag = 0; break;}
            }
            if(flag == 0) break;
        }
        if(flag == 0) continue;
        cout<<"YES"<<endl;

    }
    return 0;
}

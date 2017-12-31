#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  string str = "machula";
  int len = str.length();
  while(t--) {
    int found = -1;
    string val[6];
    for(int j=1; j<=5; j++) {
      cin>>val[j];
      if(val[j].length() >= len) {

        if(val[j].find(str) != string::npos) {
          found = j;
        }
      }

    }
    int ans;

    if(found == 1) {
        ans = stoi(val[5]) - stoi(val[3]);
        cout<<ans<<" + "<<val[3]<<" = "<<val[5]<<endl;
    }
    else if(found == 3) {
        ans = stoi(val[5]) - stoi(val[1]);
        cout<<val[1]<<" + "<<ans<<" = "<<val[5]<<endl;
    }
    else if(found == 5) {
        ans = stoi(val[1]) + stoi(val[3]);
        cout<<val[1]<<" + "<<val[3]<<" = "<<ans<<endl;
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  size_t pos;
  bool err;
  while(cin>>s) {
    err = false;
    int len = s.size();
    pos = s.find('_');
    if(pos == string::npos) {
      if(isupper(s[0])) {err = true; goto print;}
      else {
        for(int i=0; i<s.size(); i++) {
          if(isupper(s[i])) {
            char c;
            c = tolower(s[i]);
            s.replace(i, 1, 1, c);
            s.insert(i, 1, '_');
          }
        }
      }
    }
    else if(pos == 0 || s[len-1] == '_') {
      err = true; goto print;
    }
    else if(s.find("__") != string::npos) {
      err = true;  goto print;
    }
    else {

      for(int i=0; i<s.size(); i++) {
        if(isupper(s[i])) {
          err = true;
          goto print;
        }
        else if(s[i] == '_'){
          if(isupper(s[i+1])) {
            err = true; goto print;
          }
          else {
            char ch;
            ch = toupper(s[i+1]);
            s.replace(i, 2, 1, ch);
          }
        }
      }
    }
    print:
    if(err == true) cout<<"Error!"<<endl;
    else
    cout<<s<<endl;
  }

}

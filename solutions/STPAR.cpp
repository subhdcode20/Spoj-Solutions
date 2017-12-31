#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int num;
    int x;
    bool pass;
    int top;
    //cin>>n;
    scanf("%d", &n);
    while(n!=0) {
      stack<int> side;
      pass = true;
      x=1;
      for(int i=0; i<n; i++) {
        //cin>>num;
        scanf("%d", &num);
        if(pass != false) {
          if(num == x) {
            x += 1; continue;
          }if(side.empty() == 0) {
            top = side.top();
            if(top == x) {
              while(top == x) {
              side.pop();
              x += 1;
              if(!side.empty()) { top = side.top(); }
              else break;
              }
              if(num == x) x += 1;
              else side.push(num);
            }
            else if(num < side.top()) {
                side.push(num);
            }
            else {
                pass = false;
            }
          }
          else {
            side.push(num);
          }

        }
      }
      if(pass == true) printf("yes\n"); //cout<<"yes"<<endl;
      else printf("no\n"); //cout<<"no"<<endl;
      //cin>>n;
      scanf("%d", &n);
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   int ng, nm;
   int x;
   int sg, sm;
   while(t--) {
     priority_queue<int, vector<int>, greater<int> > qg;
     priority_queue<int, vector<int>, greater<int> > qm;

     cin>>ng>>nm;
     while(ng--) {
       cin>>x; qg.push(x);
     }
     while(nm--) {
       cin>>x; qm.push(x);
     }
     while(!qg.empty() && !qm.empty()) {
       sg = qg.top();
       sm = qm.top();
       if(sg == sm) qm.pop();
       else if(sg < sm) qg.pop();
       else qm.pop();
     }
     if(qg.empty()) cout<<"MechaGodzilla"<<endl;
     else if(qm.empty()) cout<<"Godzilla"<<endl;

   }
  return 0;
}

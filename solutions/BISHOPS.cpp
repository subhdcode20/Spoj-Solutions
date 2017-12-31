#include <bits/stdc++.h>
using namespace std;


int main()
{
	string n;
  int a[105];
  int i;
  while(cin>>n) {

    if(n=="1") cout<<"1"<<endl;
    else {
      int j=0;
  //
      string nn;
      int index = n.size()-1;
      if(n[index]-'0' > 0) {
        nn = to_string((n[index] - '1'));
        n.replace(index, 1, nn);
      }
      else {
        int zero = 0;
        nn = "";
        while(n[index]-'0' == 0) {
            zero++;
            index--;
            nn += '9';
        }


          n.replace(n.size()-(zero), zero, nn);
          n.replace(index, 1, to_string(n[index]-'1'));

      }
  //

      for(i=n.size()-1; i>=0; i--) {
        a[j] = n[i]-'0';
        j++;
      }

      int x;
      int carry = 0;

      for(i=0; i<n.size(); i++) {
        x = a[i] * 2;
        x += carry;
        a[i] = x%10;
        carry = x/10;
      }
      if(carry > 0) {
        a[i] = carry; i++;
      }

      for(int j=i-1; j>=0; j--) printf("%d", a[j]); cout<<endl;

    }


  }

    return 0;
}

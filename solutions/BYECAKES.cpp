#include <bits/stdc++.h>
using namespace std;


int main()
{
	int x[4], y[4], z[4]={0}, p[4]= {0}, a, temp=0;
	while(cin>>a && a != -1) {
		int count = 0;
		x[0] = a; if(a == 0) count++;
		for(int i=1; i<4; i++) {cin>>a; x[i] = a; if(a == 0) count++;}
		for(int i=0; i<4; i++) {cin>>a; y[i] = a;}
		if(count == 4) {cout<<"0 "<<"0 "<<"0 "<<"0"<<endl; continue;}
		for(int i=0; i<4; i++) {
			if(x[i] <= y[i]) {
				z[i] = y[i] - x[i];
				p[i] = (x[i] + z[i]) / y[i];
			}
			else if(x[i] > y[i]) {
				temp = x[i] %  y[i];
				z[i] = temp == 0 ? 0 : y[i] - temp;
				p[i] = (x[i] + z[i]) / y[i];
			}
		}

		int maxp = 0;
		maxp = *max_element(p, p+4);
		for(int i=0; i<4; i++) {
			if(p[i] < maxp) {
				z[i] = (maxp * y[i]) - x[i];
			}
		}
		for(int i=0; i<4; i++) {
			cout<<z[i]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

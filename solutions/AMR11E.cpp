#include <bits/stdc++.h>
using namespace std;

bool isprime[10001];
void seive() {
  memset(isprime, true, sizeof(isprime));
	isprime[0]=false; isprime[1]=false;
	for(int i=2; i*i<=10001; i++) {
		if(isprime[i]) {
			for(int j=i*i; j<10001; j+=i) {
				isprime[j] = false;
			}
		}
	}
}

int main() {
	int t;
	cin>>t;
	seive();
	vector<int> magic;
	int magic_count=2, count;
	magic.push_back(30);
	magic.push_back(42);
	while(t--) {
		int n;
		cin>>n;
		if(magic.size()>n) goto here;
		if(n==1) goto here;
		else if(n==2) goto here;
		else {
			int i=magic[magic_count-1];
			while(magic_count < n) {
				count = 0; i++;
				for(int j=2; j*j <= i; j++) {
					if(i%j == 0) {
						if(isprime[j]) count++;
						if(isprime[i/j]) count++;
						//cout<<"herrrr"<<endl;
					}
					if(count == 3) {
						magic.push_back(i); magic_count++;
						break;
					}
					//cout<<"yes"<<endl;
				}
			}
		}
		here:
		cout<<magic[n-1]<<endl;

	}
}

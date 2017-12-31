#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, b, count; cin>>t;
	vector< pair<int, int> > v;
	while(t--) {
		cin>>n;
		count = 0;
		v.clear();
		for(int i=0; i<n; i++) {
			cin>>a>>b; v.push_back(make_pair(b,a));
		}
		sort(v.begin(), v.end());

		int finish = v.front().first;
		count++;
		for(int i=1; i<n; i++) {
			if(v[i].second >= finish) {
				count++;
				finish = v[i].first;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	vector< vector<int> > tri(1000002);
	int t=0, x;

	while(cin>>n && n!=0) {

		for(int i=0; i<tri.size(); i++) {
			tri[i].clear();
		}
		
		t++;
		for(int i=0; i<n; i++) {
			for(int j=0; j<3; j++) {
				cin>>x;
				tri[i].push_back(x);
			}
		}


		tri[0][0] = tri[0][1];
		tri[0][2] = tri[0][2] + tri[0][1];

		for(int i=1; i<n; i++) {
			tri[i][0] = minmax(
				{tri[i][0] + tri[i-1][0], tri[i][0] + tri[i-1][1]}
			).first;

			tri[i][1] = minmax(
				{tri[i][1] + tri[i-1][0], tri[i][1] + tri[i-1][1], tri[i][1] + tri[i-1][2], tri[i][1] + tri[i][0]}
			).first;

			tri[i][2] = minmax(
				{tri[i][2] + tri[i-1][1], tri[i][2] + tri[i-1][2], tri[i][2] + tri[i][1]}
			).first;
		}

		cout<<t<<". "<<tri[n-1][1]<<endl;
	}

    return 0;
}

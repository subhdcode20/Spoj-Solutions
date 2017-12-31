#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	int smoke[102][102];
	int mix[102][102];
	int x, q=0, color;
	while(cin>>n && n != EOF) {
		for(int i=0; i<n; i++) {
			cin>>x; mix[i][i] = x;
		}
		for(int l=2; l<=n; l++) {
			for(int i=0; i<=n-l; i++) {
				int j = i+l-1;
				smoke[i][j] = INT_MAX;
				for(int k=i; k<j; k++) {
					q = smoke[i][k] + smoke[k+1][j] + (mix[i][k] * mix[k+1][j]);
					color = (mix[i][k] + mix[k+1][j])%100;
					if(q < smoke[i][j]) {
						smoke[i][j] = q;
						mix[i][j] = color;
					}
				}
			}
		}

		cout<<smoke[0][n-1]<<endl;
	}
    return 0;
}

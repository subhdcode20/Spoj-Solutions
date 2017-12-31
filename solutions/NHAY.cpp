#include <bits/stdc++.h>
using namespace std;


int main()
{
	char hay;
	string s;
	int len;
	while(scanf("%d",&len)!=EOF) {
		vector<int> prefix(len);
		cin>>s;

    getchar();
		prefix.clear();
		int j=0;
		prefix[0] = j;
		for(int i=1; i<len; i++) {
			while(j>0 && s[i]!= s[j]) {
				j = prefix[j-1];
			}

			if(s[i] == s[j]) {
				j++;
			}

			prefix[i] = j;
		}


		int i=0, x=0;
		while(scanf("%c",&hay) && hay!='\n') {
			x++;
			while(i>0 && s[i] != hay) {
				i = prefix[i-1];
			}
			if(s[i] == hay) {
				i++;
			}
			if(i == len){
				i=prefix[len-1]; cout<<x-len<<endl;
			}
		}
		cout<<endl;


	}


    return 0;
}

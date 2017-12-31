#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        cin.ignore(1000, '\n');
        string acc;
        map<string, int> bank;
        while(n--) {
            getline(cin, acc);
            bank[acc]++;
        }
        printf("\n");
        map<string, int>::iterator it;
        for(it=bank.begin(); it!=bank.end(); it++) {

            printf("%s %d\n", it->first.c_str(), it->second);
        }
        printf("\n");
    }
    return 0;
}

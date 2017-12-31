#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
    int friends;
    scanf("%d", &friends);
    set<int> s;
    int arr[friends+1];
    for(int p=0; p<friends; p++) {
        scanf("%d", &arr[p]);
        int y;
        scanf("%d", &y);
        int i;
        while(y--) {
            scanf("%d", &i);
            s.insert(i);
        }
    }
    for(int p=0; p<friends; p++) {
        if(s.find(arr[p]) != s.end()) {
            s.erase(arr[p]);
        }
    }
    cout<<s.size();
    //printf("%d", s.size());
    return 0;
}

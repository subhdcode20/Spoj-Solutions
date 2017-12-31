#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> arr;
    int x;
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        arr.push_back(x);
    }
    int k;
    scanf("%d", &k);
    deque<int> deq(k);
    int i;
    for(i=0; i<k; i++) {
        while(!deq.empty() && arr[i] >= arr[deq.back()]) {
            deq.pop_back();
        }
        deq.push_back(i);
    }
    for( ; i<n; i++) {
        printf("%d ", arr[deq.front()]);
        while( !deq.empty() && deq.front() <= i-k) {
            deq.pop_front();
        }
        while(!deq.empty() && arr[i] >= arr[deq.back()]) {
            deq.pop_back();
        }
        deq.push_back(i);
    }
    printf("%d", arr[deq.front()]);
    return 0;
}

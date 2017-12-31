#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <set>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    float count = 0;
    string p;
    float x=0, y=0, z=0;
    for(int i=0; i<t; i++) {
        cin>>p;
        if(p == "1/4") {x++;}
        else if(p == "1/2") {y++;}
        else if(p == "3/4") {z++;}
    }
    if(x>0) {
        if(z>0) {
            if(x<=z) {
                count += z; z=0; x=0;
            }
            else {
                count += z; x -= z; z=0;
            }
        }
        if(y>1) {
            count += floor(y/2); y -= 2*floor(y/2);
        }
        if(y>0) {
            count += 1; x -= 2;
            if(x>0) {
                count += ceil(x/4); x=0;
            }
        }
        count += ceil(x/4);
    }
    else {
        count += z;
        if(y>0) {
            if(y<=2) {
                count += 1;
            }
            else {
                count += ceil(x/2);
            }
        }
    }
    printf("%.0f", count+1);
    return 0;
}

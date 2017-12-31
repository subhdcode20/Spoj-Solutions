#include <iostream>

using namespace std;

int count = 1;
int x=1, y=1;
int pos;

void downstream() {
    while(y>1) {
        x++;
        y--;
        count++;
        if(count == pos) {
            return;// count; break;
        }
    }
    return;
}

void upstream() {
    while(x>1) {
        x--;
        y++;
        count++;
        if(count == pos) {
            return;// count; break;
        }
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        x=1;y=1;
        count = 1;
        cin>>pos;
        if(pos == 1) {
            x = y = 1;
            count = 1;
        }
        else {
            while(count < pos) {
                if(x == 1) {
                    y++;
                    count++;
                    if(count == pos) {
                        break;
                    }
                   /*count = */ downstream();
                   if(count == pos) {
                        break;
                    }
                }

                if(y == 1) {
                    x++;
                    count++;
                    if(count == pos) {
                        break;
                    }
                    /*count =*/ upstream();
                    if(count == pos) {
                        break;
                    }
                }
            }
        }

        cout<<"TERM "<<pos<<" IS "<<x<<"/"<<y<<endl;
    }
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int p;
        cin>>p;
        string seq40;
        cin>>seq40;

            string seq1 = "TTT"; int count1 = 0;
            string seq2 = "TTH"; int count2 = 0;
            string seq3 = "THT"; int count3 = 0;
            string seq4 = "THH"; int count4 = 0;
            string seq5 = "HTT"; int count5 = 0;
            string seq6 = "HTH"; int count6 = 0;
            string seq7 = "HHT"; int count7 = 0;
            string seq8 = "HHH"; int count8 = 0;

        for(int i=0; i<seq40.length()-2; i++) {

            string seq = seq40.substr(i, 3);

            if(seq.compare(seq1) == 0){count1++;}
            else if(seq.compare(seq2) == 0){count2++;}
            else if(seq.compare(seq3) == 0){count3++;}
            else if(seq.compare(seq4) == 0){count4++;}
            else if(seq.compare(seq5) == 0){count5++;}
            else if(seq.compare(seq6) == 0){count6++;}
            else if(seq.compare(seq7) == 0){count7++;}
            else if(seq.compare(seq8) == 0){count8++;}
        }
        cout<<p<<" "<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<" "<<count5<<" "<<count6<<" "<<count7<<" "<<count8<<endl;
    }
    return 0;
}

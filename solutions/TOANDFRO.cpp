#include <bits/stdc++.h>
using namespace std;

int main() {
   int col;
   cin>>col;
   string code;
   int row;
   while(col != 0) {
     cin>>code;
     row = ceil(code.size() / col);
     char arr[row][col];
     int x=0;
     char l_r = 'l';
     for(int i=0; i<row; i++) {
       if(l_r == 'l') {
         for(int j=0; j<col; j++) {
           arr[i][j] = code[x] ; x++;
         }
         l_r = 'r';
       }
       else if(l_r == 'r') {
         for(int k=col-1; k>=0; k--){
           arr[i][k] = code[x]; x++;
         }
         l_r = 'l';
       }
     }
     for(int j=0; j<col; j++) {
       for(int i=0; i<row; i++) {
         cout<<arr[i][j];
       }
     }
     cout<<endl;
     cin>>col;
   }


  return 0;
}

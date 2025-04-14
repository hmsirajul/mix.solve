#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin >> s;
   string reversed = s;
   reverse(reversed.begin(), reversed.end());

   if(s==reversed){
    cout << "Yes" << endl;
   }
   else{
    cout << "No" << endl;
   }
    return 0;
}
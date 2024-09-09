#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int countString = 0;
    string s = to_string(n);
    for ( int i =0; i < s.size(); i++){
        if ( s[i] == '7' || s[i] == '4'){
            countString++;
        }

    }
    if (countString == 7 || countString == 4){
        cout << "YES" << endl;
    }
    else
    cout << "NO" << endl;
}
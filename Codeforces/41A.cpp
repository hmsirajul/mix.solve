#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a, s;
    cin >> a >> s;
    reverse(a.begin(), a.end());
    if( s==a)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
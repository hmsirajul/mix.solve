#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a ,b,c;
        cin >> a>>b>>c;
        ll  fri = c/7;
        ll days= c - fri;
        ll total = days * a * b;
        cout << total << endl;
    }
    
    return 0;
}
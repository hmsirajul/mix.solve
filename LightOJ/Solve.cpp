#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for( int i= 1 ; i<=n;i++)
    {
        int a,b,sum;
        cin >> a >> b;
        sum = a + b;
        cout << "case " << i << ":" << sum << endl;
    }
}

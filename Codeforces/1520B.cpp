#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    int result =0;
    for ( ll i =1;i<=n; i =i *10 + 1)
    {
        for (int d =1;d <= 9; d++)
        {
            if(i *d <=n)
            {
                result++;
            }
        }
    }
    cout << result << endl;
}
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
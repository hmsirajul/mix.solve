#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s, c = "codeforces";
        cin >> s;
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {

            if (s[i] != c[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
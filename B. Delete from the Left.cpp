#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s, t;
    cin >> s >> t;

    int commonLength = 0;
    while (commonLength < min(s.length(), t.length()) &&
           s[s.length() - 1 - commonLength] == t[t.length() - 1 - commonLength])
    {
        commonLength++;
    }

    int moves = s.length() + t.length() - 2 * commonLength;
    cout << moves << endl;

    return 0;
}

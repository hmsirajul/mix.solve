#include <iostream>
#include <string>

using namespace std;

int maxPr_Subsequence(string a, string b)
{
    int n = a.length();
    int m = b.length();
    int k = 0, j = 0;
    int i;
    for ( i = 0; i < m && j < n; ++i)
    {
        if (a[j] == b[i])
        {
            ++j;
            ++k;
        }
    }
    return k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int result = maxPr_Subsequence(a, b);
        cout << result << endl;
    }
    return 0;
}


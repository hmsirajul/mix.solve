#include <bits/stdc++.h>
using namespace std;
 
#define nl       '\n'
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }

        // sort by x, then by y
        sort(a.begin(), a.end());

        pair<int, int> cur = {0, 0};
        string ans;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            int r = a[i].first - cur.first;   // move right
            int u = a[i].second - cur.second; // move up

            if (r < 0 || u < 0) {
                cout << "NO" << nl;
                ok = false;
                break;
            }
            ans += string(r, 'R');
            ans += string(u, 'U');
            cur = a[i];
        }

        if (ok) {
            cout << "YES" << nl << ans << nl;
        }
    }
    return 0;
}

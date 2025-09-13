#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> a(n+1);
        vector<int> b(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i];
        }

        long long prev_time = 0;
        int prev_side = 0;
        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            long long dt = a[i] - prev_time;
            int diff = abs(b[i] - prev_side);

            if (dt < diff) {
                // impossible, but guaranteed input means valid
            }

            if ((dt - diff) % 2 == 0)
                ans += dt;  // can move every minute
            else
                ans += dt - 1;  // must skip one move

            prev_time = a[i];
            prev_side = b[i];
        }

        // Final stretch until m
        long long dt = m - prev_time;
        ans += dt;

        cout << ans << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        long long A = a1 + a2;   // for a3 = a1 + a2
        long long B = a4 - a2;   // for a4 = a2 + a3
        long long C = a5 - a4;   // for a5 = a3 + a4

        // Count max frequency among A, B, C
        int ans = 1;
        if (A == B || A == C) ans = max(ans, 2);
        if (B == C) ans = max(ans, 2);
        if (A == B && B == C) ans = 3;

        cout << ans << '\n';
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }

    // Count rows and columns with exactly one '1'
    int row_single_count = 0;
    int col_single_count = 0;

    for (int i = 0; i < n; i++) {
        int cnt = count(g[i].begin(), g[i].end(), '1');
        if (cnt == 1) row_single_count++;
    }

    for (int j = 0; j < n; j++) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (g[i][j] == '1') cnt++;
        }
        if (cnt == 1) col_single_count++;
    }

    if (row_single_count > 0 || col_single_count > 0) {
        cout << "TRIANGLE" << endl;
    } else {
        cout << "SQUARE" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

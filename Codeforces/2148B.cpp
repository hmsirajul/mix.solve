#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int val;
        for (int i = 0; i < n; i++) cin >> val;
        for (int i = 0; i < m; i++) cin >> val;
        cout << n + m << endl;
    }
    return 0;
}
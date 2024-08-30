#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            cout << "1\n";
        } else if (n == 2) {
            cout << "-1\n";
        } else {
            vector<int> p(n);
            int left = 1, right = n;
            for (int i = 0; i < n; i += 2) {
                p[i] = left++;
            }
            for (int i = 1; i < n; i += 2) {
                p[i] = right--;
            }
            for (int i = 0; i < n; ++i) {
                cout << p[i] << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    solve();
    return 0;
}

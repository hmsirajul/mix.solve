#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countWords(string list[], int n) {
        map<string, int> cnt;
        for (int i = 0; i < n; i++) {
            cnt[list[i]]++;
        }
        int ans = 0;
        for (auto u : cnt) {
            if (u.second == 2) ans++;
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string list[n];
        for (int i = 0; i < n; i++) {
            cin >> list[i];
        }
        Solution obj;
        cout << obj.countWords(list, n) << endl;
    }
    return 0;
}

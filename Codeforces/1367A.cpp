#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, result;
        cin >> s;
        // Append characters at even positions (0, 2, 4, ...)
        for (int i = 0; i < s.size(); i += 2) {
            result += s[i];
        }
        // For even-length strings, append the last character
        if (s.size() % 2 == 0) {
            result += s.back();
        }
        cout << result << endl;
    }
    return 0;
}

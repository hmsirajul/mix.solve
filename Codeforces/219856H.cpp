#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() < 3) {
            cout << "Bad" << endl;
            continue;
        }
        bool good = false;
       
        for (int i = 0; i <= s.size() - 3; i++) {
            if ((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || 
                (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')) {
                good = true;
                break;
            }
        }
       
        cout << (good ? "Good" : "Bad") << endl;
    }
    return 0;
}
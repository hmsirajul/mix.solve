#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    vector<int> a(n); 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); 

    int money = 0;

    for (int i = 0; i < n && m > 0; i++) {
        if (a[i] < 0) {
            money += abs(a[i]);
            m--;
        } else {
            break; 
        }
    }

    cout << money << endl;

    return 0;
}

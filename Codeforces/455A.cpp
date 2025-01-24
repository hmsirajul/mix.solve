#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll dp[100005] = {0}; // To store frequency of each number
ll dp1[100005];      // To store the maximum points

int main() {
    ll a, b, maxElement = 0;
    cin >> a;

    // Count frequency of each number
    for (ll i = 0; i < a; i++) {
        cin >> b;
        dp[b]++;
        maxElement = max(maxElement, b); // Track the largest number in input
    }

    // Base cases
    dp1[0] = 0;
    dp1[1] = dp[1];

    // Dynamic programming to calculate the maximum points
    for (ll i = 2; i <= maxElement; i++) {
        dp1[i] = max(dp1[i - 1], dp1[i - 2] + i * dp[i]);
    }

    // Output the maximum points
    cout << dp1[maxElement] << endl;

    return 0;
}

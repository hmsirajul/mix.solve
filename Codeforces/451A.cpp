#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // The total number of moves is determined by the minimum of a and b
    int moves = min(a, b);

    // If the number of moves is odd, Akshat wins; otherwise, Malvika wins
    if (moves % 2 == 1) {
        cout << "Akshat";
    } else {
        cout << "Malvika";
    }

    return 0;
}

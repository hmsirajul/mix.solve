#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long totalPeople = a + 2 * b + 3 * c;
        long long minTents = (totalPeople + 2) / 3;

        // Check if it's possible to accommodate all participants
        if (a + 2 * b < c || totalPeople % 3 != 0) {
            cout << "-1\n";
        } else {
            cout << minTents << endl;
        }
    }

    return 0;
}

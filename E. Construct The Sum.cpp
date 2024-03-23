#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        long long s;
        cin >> n >> s;
        long long maxSum = (long long)n * (n + 1) / 2;

        if (s > maxSum || s < n) {
            cout << "-1\n";
            continue;
        }

        vector<int> elements;
        for (int i = n; i >= 1; --i) {
            if (s - i >= elements.size()) {
                elements.push_back(i);
                s -= i;
            }
        }


        cout << elements.size() << " ";
        for (int i = elements.size() - 1; i >= 0; --i) {
            cout << elements[i] << (i > 0 ? " " : "\n");
        }
    }
    return 0;
}

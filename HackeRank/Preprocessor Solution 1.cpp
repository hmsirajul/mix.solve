#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q; // n: number of arrays, q: number of queries
    cin >> n >> q;

    // Step 1: Read the n variable-length arrays
    vector<vector<int>> arrays(n);
    for (int i = 0; i < n; ++i) {
        int k; // Length of the current array
        cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> arrays[i][j];
        }
    }

    // Step 2: Process each query and output the results
    for (int i = 0; i < q; ++i) {
        int array_index, element_index;
        cin >> array_index >> element_index;
        cout << arrays[array_index][element_index] << endl;
    }

    return 0;
}

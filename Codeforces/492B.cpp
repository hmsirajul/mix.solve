#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> arr(a);

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    // Sort the array to find maximum gaps between successive elements
    sort(arr.begin(), arr.end());

    // Find the maximum gap between successive elements
    int m = 0;
    for (int i = 0; i < a - 1; i++)
    {
        m = max(m, arr[i + 1] - arr[i]);
    }

    // Calculate distances from edges and max gap
    double x = arr[0];            // Distance from 0 to the first element
    double y = (double)m / 2;      // Half of the maximum gap between elements
    double z = b - arr[a - 1];     // Distance from the last element to b
    double ans = max({x, y, z});   // Find the maximum of x, y, and z

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    vector<int> v;
    cin >> n; // users input
    for ( int i = 0; i<n; i++)
    {
        int a; // elements for index
        cin >> a;
        v.push_back (a);
    }
    /// Printing all elements all created index;
    cout << v.size()<< endl;
    for( int i =0; i<v.size(); i++)
        cout << v[i] << " " << endl;
}

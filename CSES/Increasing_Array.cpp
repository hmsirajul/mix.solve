#include <bits/stdc++.h>
using namespace std;
 
#define ll       long long
#define nl       '\n'
#define sz(x)    (x).size()
#define arrsz(x) (sizeof(x) / sizeof(x[0]))
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int n;
    cin>> n;
    vector<ll>a(n);
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    ll moves = 0;
    for (int i =1;i<n;i++){
        if(a[i] < a[i-1]){
            moves += (a[i -1] - a[i]);
            a[i] = a[i -1];

        }
    }
    cout << moves << nl;


    return 0;
}
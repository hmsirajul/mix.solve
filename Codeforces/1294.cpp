#include <bits/stdc++.h>
using namespace std;
 
#define ll       long long
#define nl       '\n'
#define sz(x)    (x).size()
#define arrsz(x) (sizeof(x) / sizeof(x[0]))
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define HA       cout << "YES" << nl
#define NA       cout << "NO" << nl
 
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;
const long long INF = 1e18;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        
        ll mx = max(a, max(b, c));
        ll nd = (mx - a) + (mx - b) + (mx - c); 
        
        if (n < nd) {
            cout << "NO\n";  
        } else {
            ll r = n - nd;  
            
            if (r % 3 == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}
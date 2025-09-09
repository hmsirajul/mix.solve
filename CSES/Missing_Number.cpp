#include <bits/stdc++.h>
using namespace std;
#define ll       long long
#define nl       '\n'

int main(){
    ll n;
    cin >> n;
    ll givensum =0;
    for (int i =0;i<n -1;i++){
        ll x;
        cin >> x;
        givensum += x;
    }
    ll  total = n*(n+1)/2;
    cout<< total - givensum << nl;

    return 0;
}
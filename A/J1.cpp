#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector <int > a(n);
    for ( int i =0;i<n;++i){
        cin >> a[i];
    }
    vector<ll>dp(n+1, LLONG_MAX);
    dp[1] = a[0];
    for ( int i =2;i<=n;++i){
        ll min_prev = LLONG_MAX;
        for (int step = 1; step <= i -1; step *=2){
            int j = i -step;
            if(j>=1)
            {
                min_prev = min(min_prev , dp[j]);
            }
        }
        dp[i] = min_prev + a[i -1];
    }
    cout << dp[n]<<endl;
    return 0;
}
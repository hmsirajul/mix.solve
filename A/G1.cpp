#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n , m;
    cin  >> n >>m;
    vector < int >a(n);
    int max_a =0;
    for ( int i =0;i<n;++i){
        cin >> a[i];
        max_a = max(max_a, a[i]);
    }
    vector<int > frq(max_a +1 , 0);
    // for ( int i =0 ;i <a.size();i++)
    // {
    //     frq[a[i]]++;
    // }
    for (int x : a){
        frq[x]++;
    }
    for (int d = max_a; d>= 1; --d)
    {
        int cnt =0;
        for ( int j = d; j <= max_a; j+=d)
        {
            cnt += frq[j];

        }
        if ( cnt >= m)
        {
            cout << d<< endl;
            return 0;
        }
    }
    //cout << 1 << endl;
    return 0;
}
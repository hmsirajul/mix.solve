#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        vector<int>pref(n,0) , suff(n,0);
        set <char>s;
        for (int i=0;i<n;i++)
        {
            s.insert(a[i]);
            pref[i] =s.size();
        }
        s.clear();
        for (int i = n-1;i>-1;i--)
        {
            s.insert(a[i]);
            suff[i] = s.size();
        }
        int ans =0;
        for (int i =0;i<n -1;i++)
        {
            ans = max(ans,pref[i] + suff[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}
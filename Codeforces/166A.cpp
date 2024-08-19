#include<bits/stdc++.h>
using namespace std;

///comprator function;
// bool cmd(const pair<int,int >&p1, const pair<int ,int >&p2)
// {
//     if(p1.first >p2.second)
//     {
//         return 1;
//     }
//     else if (p1.first == p2.first) 
//     return (p1.second <p2.second);
//     return 0;
// }
int main ()
{
    int m,k;
    cin >> m >> k;
    vector<pair<int ,int >> v(m);
    for(int i = 0; i<m; i++)
    {
        cin >> v[i].first >>v[i].second;
        v[i].first *= -1; // wirhout comprator function ;

    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (auto u:v)
    {
        if(u == v[k-1])
        ans++;
    }
    cout << ans << endl;

}
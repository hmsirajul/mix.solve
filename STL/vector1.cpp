#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string , int >> v;
    v.push_back({"Shirejul " , 21});
    v.push_back({"Rajul " , 12});
    v.push_back({"islam " , 5});
    v.push_back({"Magpie " , 13});
    v.push_back({"Shuvo " , 9});
    v.push_back({"Arkan " , 56});
    v.push_back({"Abir " , 15});
    v.push_back({"kabil " , 21});
    v.push_back({"Nabil " , 22});
    v.push_back({"Maruf " , 20});
    sort(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;

}

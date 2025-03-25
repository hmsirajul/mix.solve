#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int>a(n);
        for(int i =0; i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int currtent_count =0, teams =0;
        for (int i =n -1; i>= 0;i--){
            currtent_count++;
            int required = (x +a[i] -1)/a[i];
            if(currtent_count >= required){
                teams++;
                currtent_count = 0;
            }
        }
        cout << teams << "\n";
    }



    return 0;
}
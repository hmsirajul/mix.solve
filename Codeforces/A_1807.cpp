#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a>>b>>c;
    if (a+b == c){
        cout << "+\n" ;
    }
    else {
        cout << "-\n";
    }

}
int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        solve();
    }

    return 0;
}
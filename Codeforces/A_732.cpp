#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,o;
    cin >> m>>n>>o;
    int p;
    p = abs(m-n)+abs(m-o)+abs(n-o);
    cout<<p/2;


    return 0;
}
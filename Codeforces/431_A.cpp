#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a>>b>>c>>d;
    int sum=0;
    string s;
    cin >>s;
    for (int i=0;i<s.size();i++){
        if(s[i]=='1'){
            sum+=a;

        }
        else if(s[i]=='2'){
            sum+=b;

        }
        else if(s[i]=='3'){
            sum+=c;

        }
        else {
            sum+=d;

        }
    }
    cout << sum;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a, b, c, d;
    cin >> a ;
    c =1;
    d=0;
    string s1, s2,s3;
    cin >> s1;
    for ( b=0; b<a-1;b++){
        cin >> s2;
        if(s1 ==s2)
        {
            s1=c+1;
        }
        else{
            s3 = s2;
            d=d+1;
        }       
    }
    if(c>d){
        cout<< s1;
    }
    else{
        cout<<s3;
    }
    

    return 0;
}
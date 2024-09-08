#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,n,w;
    cin >> k>> n>>w;
    int p =0;
    for  ( int i=1; i<=w; i++)
    {
        p+=i;

    }
    int d= (p*k) -n;
    if(d<0)
    {
        cout << "0";

    }
    
    else
    {
        cout << d;

    }
     
    
}
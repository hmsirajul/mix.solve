#include<bits/stdc++.h>
using namespace std;
int main (){
    int n, a,b;
    int counts=0, max =0;
    
    cin >> n;
    for ( int i =0; i<n; i++ )
    {
        cin >> a>> b;
        counts = (a+max)-b;

        if ( counts <0)
        {
            max = 0;
        }
        else
        max= counts;
    }
    cout << counts;


    return 0;
}
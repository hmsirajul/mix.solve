#include<bits/stdc++.h>
using namespace std;
int main ()
{
    for (int i = 1; i<=5; ++i)
    {
        for (int j = 1;j<5;++j)
        {
            int n,m;
            cin >> n;
            if( n == 1)
            {
               m = (i-3)+(j-5);
               cout << m << endl; 
            }
        }
    }
}
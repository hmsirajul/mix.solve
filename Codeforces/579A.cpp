///A. Raising Bacteria
#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int a ;
    cin >> a;
    int sum = 0;
    while ( a > 0)
    {
        if( a % 2 == 1)
        {
            a--;
            sum++;
        }
        else
        {
            a = a/2;
        }
    }
    cout << sum << endl;
   return 0; 
} 

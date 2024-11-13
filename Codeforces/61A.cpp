//A. Ultra-Fast Mathematician
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string  a , b;
    cin >> a >> b;
    for (int i = 0 ; i < a.size() ; i++)
    {
        int Xor = a[i] ^ b[i];
        cout << Xor ;
    }
    return 0;
} 



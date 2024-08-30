#include<bits/stdc++.h>
using namespace std;
///4,7,44,47,74,77,444,447,474,477,744,747,774,777;
int main ()
{
    int n;
    cin >> n;
    vector<int> number_input ={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for ( int i =0; i< number_input.size(); i++)
    {
        if(n % number_input[i] == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

return 0;

}
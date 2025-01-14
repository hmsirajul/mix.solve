#include<bits/stdc++.h>
using namespace std;
int main()
{

    int s;
    cin >> s;
    string t;
    map <string, int>reg;
    for(int i=0;i<s;i++)
    {
        cin>>t;
        if (reg[t] == 0 )
        {
            reg[t]=1;
            cout<< "OK" << endl;
        }
        else
        {
            cout<< t << reg[t] << endl;
            reg[t]++;
        }
    }
    return 0;
}

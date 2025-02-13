#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    int police = 0;
    int crime = 0;
    for (int i =0; i<a; i++)
    {
        int x;
        cin >> x;
        if (x>0)
        {
            police +=x;
        }
        else
        {
            if (police <1)
            {
                crime++;
            }
            else
            {
                --police;
            }
        }
    }
    cout << crime;
    return 0;
}
// #include<iostream>
// #include<string>
// using namespace std;
// int main ()
// {
//     string s;
//     cin >> s;
//     int zero = 0, one = 0, m =0;
//     for (int i = 0; i<s.size(); i++)
//     {
//         if ( s[i] == '1')
//         {
//             one++;
//             zero =0;
//         }
//         else
//         {
//             zero++;
//             one = 0;
//         }
//         if(zero == 7 || one == 7)
//         m= 0;
//         if(m==1)
//         {
//             cout << "YES" << endl;
            
//         }
//         else
//         { 
//             cout << "No" << endl;

//         }
        
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;
    bool found = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            one++;
            zero = 0;
        }
        else
        {
            zero++;
            one = 0;
        }

        if (zero == 7 || one == 7)
        {
            found = true;
            break; // No need to continue if we already found 7 consecutive '0's or '1's
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

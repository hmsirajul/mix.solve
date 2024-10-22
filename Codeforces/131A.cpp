// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int c=0; int  d=0;
//    string s;
//    cin >> s;
//    for(int i=0; i<s.size(); i++)
//    {
//     if(islower(s[i]))
//     {
//         c++;
//     }
//    }
//    for (int  i = 0; i <s.size(); i++)
//    {
//     if(isupper(s[i]))
//     {
//         d++;
//     }
    
//    }
//    if(islower(s[0]) && c==0 )
//    {
//     s[0] = toupper(s[0]);
//     for(int i=1; i<s.size(); i++)
//     {
//         s[i] = tolower(s[i]);
//     }
//     cout << s;
//    // if( d==s.size())

//    }
//    if(d == s.size())
//    {
//     for (int i =0; i<s.size(); i++)
//     {
//         s[i] = tolower(s[i]);
//         cout << s[i];
//     }
    
//    }
   
 
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int lowerCount = 0, upperCount = 0;
    string s;
    cin >> s;

    
    for (char ch : s) {
        if (islower(ch)) {
            lowerCount++;
        } else if (isupper(ch)) {
            upperCount++;
        }
    }

    
    if (upperCount == s.size()) {
        // Convert the entire string to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    } 
    
    else if (islower(s[0]) && upperCount == s.size() - 1) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    
    else {
        cout << s << endl;
    }

    return 0;
}

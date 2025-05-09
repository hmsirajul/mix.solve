#include <bits/stdc++.h>
using namespace std;

bool substring(string s)
{
   
int count01 = 0, count10 = 0;

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == '0' && s[i + 1] == '1') {
            count01++;
        }
        if (s[i] == '1' && s[i + 1] == '0') {
            count10++;
        }
    }

    return count01 == count10;
}

int main()

{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            string temp = s;
            if (temp[i] == '0') temp[i] = '1';
            else temp[i] = '0';

            
            if (substring(temp)) {
                result++;
            }
        }

        cout << result << endl;
    }
    


    return 0;
}
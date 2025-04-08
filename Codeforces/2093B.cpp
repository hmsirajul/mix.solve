#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (--t)
//     {
//         string s;
//         cin >>s;
//         int z =0;
//         int m=0;
//         for (char c : s){
//             if(c == '0'){
//                 z++;
//             }
//             else
//             {
//                 int c_l = z+1;
//                 if(c_l > m){
//                     m = c_l;
//                 }
//             }
//         }
//         cout << s.length()- m << endl;
//     }
//     return 0;   
// } 

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int z = 0;
        int m = 0;
        for (char c : s) {
            if (c == '0') {
                z++;
            } else {
                int c_l = z + 1;
                if (c_l > m) {
                    m = c_l;
                }
            }
        }
        cout << s.length() - m << endl;
    }
    return 0;
}

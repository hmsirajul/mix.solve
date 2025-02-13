// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string a;
//     getline(cin,a);
//     sort(a.begin(), a.end());   
//     int count =0;
//     for (int i =0; i<a.size();i++){

//         if ( a[i]== '{}' || a[i] == ',' || a[i] == ' ')
//         {
//             continue;
//         }
//         else{
//             if(a[i] != a[i+1]){
//                 count++;
//             }
//         }

//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a); 
    
    set<char> unique_chars;

    for (char c : a) {
        if (c != '{' && c != '}' && c != ',' && c != ' ') {
            unique_chars.insert(c);  
        }
    }
    cout << unique_chars.size() << endl;  

    return 0;
}

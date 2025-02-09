#include<bits/stdc++.h>
using namespace std;
int main(){

    char a;
    cin >> a;
    if ( a >= 'A' && a <= 'Z'){
        cout << "ALPHA IS CAPITAL " << endl;
    }
    else if (a>= 'a' && a<='z'){
        cout << "ALPHA IS SMALL " << endl;    
    }
    else if (a >= '0' && a<='9')
    {
        
         cout << "IS DIGIT" << endl;
    }
    else{
        cout << "INVALID " << endl;

    }


    return 0;
}
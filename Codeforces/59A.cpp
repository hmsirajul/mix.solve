#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    int uppr = 0, lowr=0;
    for ( int i =0; i< s.size(); i++)
    {
        if ( isupper(s[i]))
        {
            uppr++;
        }
        else
        lowr++;
    }
    if ( uppr<lowr)
    {
        for ( int i = 0; i< s.size(); i++)
        {
            s[i] = tolower(s[i]);
            
        }
        cout << s << endl;
    }
    else if (uppr >lowr)
    {
        for ( int i = 0; i< s.size(); i++)
        {
            s[i] = toupper(s[i]);

        }
        
        cout << s<< endl;
    }
    else if ( uppr == lowr)
    {
        for(int i = 0; i< s.size(); i++)
        {
            s[i] = tolower(s[i]);

        }
        
        cout << s << endl;
    }
}
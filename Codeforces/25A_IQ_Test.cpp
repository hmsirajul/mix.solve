#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b = 0, c= 0;
    cin >> a;
    int arr[a] ;
    for ( int i = 0; i<a; i++)
    {
        cin >> arr[i];
        if( arr[i]%2 == 0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }

    if (b>c)
    {
        for ( int i =0; i<a; i++)
        {
            if( arr[i]%2!= 0)
            {
                cout << i+1;
                break;
            }
            
        }
    }
    else
    {
        for ( int i = 0; i<a; i++)
        {
            if(arr[i]%2==0)
            {
                cout << i+1;
                break;
            }
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int report (int arr[],int n)
{
    for (int i=0; i<n;i++)
    {
        if ( arr[i] == 1)
        {
            return 1;
        }
    }
    return 0;

}


int main()
{

    int n =0;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int respond = report(arr,n);
    if ( respond == 1)
    {
        cout << "HARD";
    } 
    else
    {
        cout << "EASY";
    }

return 0;

}
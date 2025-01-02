#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    float sum=0;
    int arr[a];
    for (int i= 0; i<a; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];

    }
    cout << sum/a;


    return 0;
}
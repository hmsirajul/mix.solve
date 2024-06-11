///Take an array of integer data type of size 10 . Get input from user and store the value in the array and finally print the sum of those 10 intigers;
#include<iostream>
using namespace std;
int main()
{
    int arr[10],i ,sum = 0;
    cout << " Enter the value of the array"
    for(i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for( i = 0; i< 10; i++)
    {
        sum = sum + arr[i];

    }
    cout << " Total is : " << sum << endl;

    return 0;
}


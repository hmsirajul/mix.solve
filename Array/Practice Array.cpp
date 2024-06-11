#include<iostream>
#include<vector>
using namespace std;
int main()
{


    int n;
    cin >> n;
    int arr[1000];

    for (int i= 0; i<n; i++) // this loop taking input and insearting into arr[] index;
    {
        cin>> arr[i];
    }

    for( int i = 0; i<n; i++ ) // this loop showing the all value;
    {
        cout << "The value is : arr[0]" << arr[i] << endl;
    }
    return 0;
}

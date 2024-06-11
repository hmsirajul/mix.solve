#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {-99,45,100,37,89,327,245};
    int max = arr[0], i;
    for ( i = 1; i < 7 ; i++)
    {
        if (arr[i] > max )
        {
            max = arr[i];
        }
    }
    cout << "Max Value is : " << max << endl;
    return 0;
}

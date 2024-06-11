///Problem 01; calculating average and puting and printing value from usears;
#include<iostream>
using namespace std;
int main()
{
    int sum = 0;

    int data_type [3][3];
    for( int i = 0 ; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
           cin >> data_type [i][j];
        }
    }
    for( int i = 0 ; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
          cout<<" Array is: " << data_type [i][j] <<  endl;
          sum = sum + data_type [i][j];

        }
        cout << endl;
        float average = sum / 9.0;
        cout << "The average is : " << average << endl;
    }
    return 0;
}

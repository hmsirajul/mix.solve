#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int arr[4];
    vector<int>v;
    v.push_back(2);// access and creates (0)index;
    v.push_back(3);// access and creates (1)index;
    v.push_back(5);// access and creates (2)index;
    v.push_back(6);// access and creates (3)index;

    v[2] = 10; // In this line insert 10 into index (2);

    cout << v[2]<< endl; //access and creates (2)index showing
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>  v = {2,3,5,4,6,2,1,1,2,2,2} ;
    sort(v.begin(),v.end()); /// sort fast
    int siz = unique( v.begin (),v.end()) - v.begin(); /// finding unique values
    cout << siz << endl;
    for  ( int i = 0; i < siz ; i++) ///printing unique value
    {
        cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}

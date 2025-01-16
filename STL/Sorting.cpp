#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v ={5,3,9,5,4,1,2};
    /*
    ///if the qustione say sort 1st index to 3rd index
    sort(v.begin(), v.end()-1); //or use itrator
    ///if the qustione say sort 2nd index to 5th index
    sort (v.begin()+1,v.begin()+5);
    */
    sort (v.begin(),v.end());
    for(auto u:v)
    {
        cout << u << " " ;
        cout << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>  v = {2,3,5,4,6,2,1,1,2,2,2} ;

    //vector<int> :: iterator it = max_element(v.begin(),v.end());
    //vector<int> :: iterator it = max_element(v.begin()+1,v.begin()+5); // index 1 to index 4 max value
    int n = min_element(v.begin(),v.end()) - v.begin(); // with out iterator
    cout << n << endl;
    //cout << *it << endl;
    return 0;
}

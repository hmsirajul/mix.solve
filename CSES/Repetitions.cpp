#include <bits/stdc++.h>
using namespace std;
 
#define ll       long long
#define nl       '\n'
int main()
{
    string n;
    cin >> n;

    int max =1;
    int crn = 1;
    for (int i = 1; i< n.size();i++){

        if(n[i] == n[i-1])
        {
            crn++;
        }
        else{
            crn=1;
        }
        if (crn > max)
        {
            max = crn;
        }
        

    }
    cout << max << endl;
    return 0;
}
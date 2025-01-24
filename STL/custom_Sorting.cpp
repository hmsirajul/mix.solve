#include<bits/stdc++.h>
using namespace std;
vector<int>input;
bool myComp(int a, int b)
{
    if(input[a] == input[b])
    {
        return a<b;

    }
    else
    return input[a] <input[b];
}
int main()
{
    int n;
    cin >> n;
    input.resize(n);
    vector<int >input(n);
    for ( int i =0; i<n; i++)
    {
         cin >>input[i];
    }
    vector<int>output(n);
    for (int i =0; i<n; i++)
    {
        output[i]=i;
    }
    sort(output.begin(),output.end(), myComp);
    for (int x: output)
    cout << x << " ";

    return 0;
}
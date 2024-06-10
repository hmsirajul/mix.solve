#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FUNCTION(name, operator) \
    int name(int a, int b) { return (a operator b) ? a : b; }
#define INF 10000000
#define io(v) cin >> v;
#define toStr(str) #str
#define foreach(v,i) for ( int i = 0; i < v.size(); i++)
FUNCTION(minimum, <)
FUNCTION(maximum, >)

using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<int > v (n);
    foreach(v,i)
    {
        io(v[i]);
    }
    int mn = INF;
    int mx = -INF;
    foreach (v,i)
    {
        mn = minimum(mn, v[i]);
        mx = maximum(mx, v[i]);
    }
    int result = mx - mn;
    cout << toStr(Result = ) << ' ' << result << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a;
    cin >> a;
    int  total_sum = 0;
    for ( int b = 2; b <= a -1;++b){
        int temp = a;
        int current_sum =0;
        while (temp >0)
        {
            current_sum += temp % b;
            temp /= b;
        }
        total_sum += current_sum;
        
    }
    int dom = a -2;
    int gv = __gcd(total_sum, dom);
    int num = total_sum / gv;
    dom /=gv;
    cout << num << "/" << dom << endl;
    return 0;
}
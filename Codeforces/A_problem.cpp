#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count0 =0,count1 =0, count2=0,count3=0, count4=0,count5=0;
        int result =0;
        for (int i=0;i<n;i++){
            int num =a[i];
            if(num == 0)count0++;
            else if(num == 1) count1++;
            else if(num == 2) count2++;
            else if(num == 3) count3++;
            else if(num == 4) count4++;
            else if(num == 5) count5++;

            if(i+1>= 8){
                if(count0 >= 3 && count1 >= 1 && count2 >= 2 && count3 >= 1 && count5 >= 1)
           {
            result = i +1;
            break;
           }
            }
        }
        cout << result << endl;
    }

    return 0;
}
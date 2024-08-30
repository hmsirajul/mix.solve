#include<bits/stdc++.h>
using namespace std;
int main()
{
  string t;
     cin>>t;
//    int  count1 = 0 , count2= 0;
//    for (int  i = 0; i < s.size(); i++)
//    {
//       if(s[i] == a[count1])
//       {
//         count1++;
//         count2++;
//       }
//    }
//    if ( count2 == 5)
//    {
//     cout << "YES" ;
//    }
//    else
//    {
//     cout << "NO";
//    }
//    return 0;
string str = "hello";
    int j=0;
    int cnt=0;
    for(int i=0;i<t.size();i++)
    {
        if(str[j]==t[i])
        {
        cnt++;
        j++;
        }
    }
    if(cnt==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
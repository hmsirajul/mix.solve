#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int >a(n);
        cin >> n;
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        int even=0,odd=0;
        for (int i=0;i<n;i++){
            if(a[i]%2==0){
                even+=a[i]; 
            }
            else{
                odd+=a[i];
            }
        }
        if(even>odd){
            cout << "YES"<< endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}
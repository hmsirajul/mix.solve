// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         int arr[a];
//         for (int i=0;i<a;i++)
//             cin >> arr[i];
//         sort(arr, arr+a);
//         for (int i=1;i<a;i++){
//             if(arr[i]-arr[i-1]>1){
//                 cout<<"No" << endl;
//                 goto read;
//             }
//         }
//         cout<<"YES" << endl;
//     }
    


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--) {
        int a;
        cin >> a;
        vector<int> arr(a);  
        for (int i = 0; i < a; i++)
            cin >> arr[i];
        
        sort(arr.begin(), arr.end());
        
        bool isPossible = true; 
        
        for (int i = 1; i < a; i++) {
            if (arr[i] - arr[i-1] > 1) {
                isPossible = false;  
            }
        }
        
        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

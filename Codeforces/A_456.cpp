#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin >> n;
    bool happy = false;
    for (int i=0;i<n;i++){
        cin >> a>> b;
        if(a<b){
            happy = true;
            
            //return;
        }
        
    }

    if (happy)
    {
        cout<< "Happy Alex"<< endl;
    }
    else{
        cout<< "Poor Alex"<< endl;
    }
   
    

}
int main(){
    solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    string a;
    cin >> a;
    
    ll maxNumber = stoll(a);
    
    string option1 = a; 
    option1.erase(option1.size() - 1, 1);
    
    string option2 = a; 
    option2.erase(option2.size() - 2, 1);
    
    ll numOption1 = stoll(option1);
    ll numOption2 = stoll(option2);
    
    cout << max(maxNumber, max(numOption1, numOption2)) << endl;
    
    return 0;
}

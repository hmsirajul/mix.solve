#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1e7;
vector<int>primes;
void sive(){
    vector<bool>is_prime(MAX_N +1, true);
    is_prime[0] =is_prime[1] = false;
    for(int i =2; i* i <= MAX_N; i++){
        if(is_prime[i]){
            for(int j =i*i;j<=MAX_N;j+=i){
                is_prime[j] = false;
            }
        }
    }
    for(int i =2;i <=MAX_N; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
}
int main(){
    sive();
    vector<int> diff(MAX_N + 2, 0);
    for (int p : primes){
        int max_m = MAX_N/p;
        for(int m =1;m<=max_m;m++){
            int a = m*p;
            if(a >MAX_N) break;
            int b= (m +1) * p-1;
            if(b >MAX_N) b= MAX_N;
            diff[a] += m;
            if(b+1 <= MAX_N){
                diff[b+1] -= m;
            }
        }
    }
    vector<int> ans(MAX_N + 1, 0);
    for (int k = 1; k <= MAX_N; ++k) {
        ans[k] = ans[k - 1] + diff[k];
    }
    
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }




    return 0;
}
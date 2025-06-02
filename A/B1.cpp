#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int >a(n);
    for ( int i =0;i <n;i++)
    {
        cin >> a[i];
    }
    vector <int >sorted_a =a;
    sort (sorted_a.begin (), sorted_a.end());

    map<int ,int >first;
    map<int ,int >secound;
    int m = sorted_a.size();
    for (int i =0;i<m;i++)
    {
        int x = sorted_a[i];
        first[x] = i;
        int cnt =0;
        while (i < m && sorted_a[i] == x)
        {
            cnt++;
            i++;
        }
        //i--;
        secound[x] = cnt;
        

    }
    map<int , int >freq;
    vector<int >ranks;
    for (int x : a)
    {
        int f = first[x];
        int c_count = freq[x];
        ranks.push_back(f + c_count);
        freq[x] = c_count +1;
    }
    vector<int> tails;
    for(int x : ranks)
    {
        int left = 0, right = tails.size();

        while (left < right)
        {
            int mid = (left + right)/2;
            if(tails[mid] <x){
                right = mid;
                //left = mid +1;
            }
            else{
                    left= mid+1;
                    //right = mid;
                }
            }
            if(left == tails.size()){
            tails.push_back(x);
        }
        else{
            tails[left] = x;
        }
        }
        cout << tails.size() << endl;
         return 0;
        
        
}
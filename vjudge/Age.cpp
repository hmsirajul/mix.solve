#include<bits/stdc++.h>
using namespace std;


int rem_time;
int year = 365;
int month = 30;
int  days ;
void calculation(int total_time)
{
    
   int years = total_time / year;
    rem_time = total_time % year;
    int months = rem_time/month;
    days = rem_time % month;
   cout << years << " years\n" <<months << " months\n" << days << " days\n" << endl; 

}


int main(){
    int a;
    cin >> a;
    calculation(a);
    return 0;
}
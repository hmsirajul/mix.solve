#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long  h1, b1,c1;
    cin >> h1 >> b1 >> c1;

    long long  h2, b2,c2;
    cin >> h2 >> b2 >> c2;
    long long mcd = 0, jcd = 0 ;
    while (true)
    {
       //t++;
       long long md = (mcd == 0) ? b1 * 2 : b1;
       long long jd = (jcd == 0) ? b2 * 2 : b2;
       h1 -= jd;
       h2 -= md;
       if (h1 <= 0 && h2 <= 0)
       {
        cout << "DRAW" << endl;
        break;
       }
       if (h1 <= 0){
        cout << "JACK PAUL" << endl;
        break;
       }

       if (h2 <= 0){
        cout << "MIKE TYSON" << endl;
        break;
       }
       if (mcd ==0)
       {
        mcd = c1 -1;
       }
       else{
        mcd--;
       }

       if (jcd == 0)
       {
        jcd = c2-1;
       }
       else{
        jcd--;
       }

       return 0;

    }
    

}
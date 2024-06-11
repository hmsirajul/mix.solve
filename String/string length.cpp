#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string strInput;
    cout << " Write the string : " ;
    getline(cin, strInput);
    int length = strInput.length();
    cout << " Length of the string is : " << length << endl;
}

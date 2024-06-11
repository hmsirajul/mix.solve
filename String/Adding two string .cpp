#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1,str2, adding ;
    cout << "Enter the first string : " << endl;
    getline(cin, str1);
    cout << "Enter the second string : " << endl;
    getline(cin, str2);

    adding = str1 + str2;
    cout << " After add both result is : " << adding << endl; ///adding two string and printing length of the string and after add string
    int length = adding.length() ;
    cout << " Length of the string is : " << length << endl;

    return 0;
}

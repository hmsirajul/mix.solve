#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string name;

  cout << "Please, enter your full name: ";
  getline (cin,name); // getline use for print full name with space . other wise it will print before space word.
  cout << "Hello, " << name << "!\n";

  return 0;
}

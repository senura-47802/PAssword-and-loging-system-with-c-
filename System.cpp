#include <iostream>

using namespace std;

int main ()
{
  int p;
  string u;
  cout << "What is your username:";
  cin >> u;
  cout << "What is your Password:";
  cin >> p;
  if (u == "Senura" && p == 2008)
    {
      cout << "Login sucessed!";
    }
  else;
  {
    cout << "Login not sucessed!";
  }
}

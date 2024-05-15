#include <iostream>

using namespace std;

int main ()
{
  int p;
  string u;
  string e;
  cout << "What is your username:";
  cin >> u;
  cout << "What is your Email:";
  cin >> e;
  cout << "What is your Password:";
  cin >> p;
  if (u == "Senura" && p == 2008 && e == "senura20140116@gmail.com")
    {
      cout << "Login sucessed! Well done.";
    }
  else
  {
    cout << "Login not sucessed! Try again.";
  }
}

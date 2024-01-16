#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int c = 5;
  while (c != 0)
  {
    string t;
    cin >> t;

    if (s[0] == t[0] || s[1] == t[1])
    {
      cout << "YES" << endl;
      return 0;
      // break;
    }
    c--;
  }

  cout << "NO" << endl;
}
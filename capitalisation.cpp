#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;

  if (s[0] >= 65 && s[0] <= 90)
  {
    cout << s << endl;
  }
  else
  {
    string t = s.substr(1);
    int temp = s[0] - 32;
    char c = (char)temp;

    cout
        << c << t << endl;
  }
}
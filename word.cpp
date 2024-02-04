#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;

  int l = 0;
  int c = 0;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= 97 && s[i] <= 112)
      l++;
    else
    {
      c++;
    }
  }

  cout << c << " " << l << endl;
  if (l >= c)
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] >= 65 && s[i] <= 90)
      {
        s[i] = s[i] + 32;
      }
    }
  }
  else
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] >= 97 && s[i] <= 112)
      {
        s[i] = s[i] - 32;
      }
    }
  }

  cout << s << endl;
}
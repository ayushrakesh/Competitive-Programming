#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] <= 90 && s[i] >= 65)
    {
      count++;
    }
  }
  if (count == s.length())
  {
    for (int i = 0; i < s.length(); i++)
    {
      s[i] = s[i] + 32;
    }
    cout << s << endl;
  }
  else if (count == s.length() - 1 && (s[0] >= 97 && s[0] <= 122))
  {
    s[0] = s[0] - 32;
    for (int i = 1; i < s.length(); i++)
    {
      s[i] = s[i] + 32;
    }
    cout << s << endl;
  }
  else
  {
    cout << s << endl;
  }
}
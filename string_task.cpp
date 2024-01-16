#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  vector<char> v;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 65 || s[i] == 69 || s[i] == 73 || s[i] == 79 || s[i] == 85 || s[i] == 89 || s[i] == 121 || s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117)
    {
      // v.push_back('.');
      continue;
    }

    else if (s[i] >= 65 && s[i] <= 90)
    {
      int a = int(s[i]);
      char c = a + 32;

      v.push_back('.');
      v.push_back(c);
    }
    else
    {
      v.push_back('.');
      v.push_back(s[i]);
    }
  }

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i];
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  for (int k = 0; k < q; k++)
  {
    string s;
    cin >> s;

    int a = 0, b = 0;

    int zeroes = 0;

    if (s.length() == 2)
    {
      cout << 0 << endl;
      continue;
    }

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == 49)
      {
        a = i;
        break;
      }
    }

    for (int j = s.length() - 1; j >= 0; j--)
    {
      if (s[j] == 49)
      {
        b = j;
        break;
      }
    }

    for (int i = a + 1; i < b; i++)
    {
      if (s[i] == 48)
      {
        zeroes++;
      }
    }

    cout << zeroes << endl;
  }
}
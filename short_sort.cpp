#include <bits/stdc++.h>
using namespace std;
int main()
{

  int q = 0;

  cin >> q;

  while (q != 0)
  {
    /* code */
    string s;
    cin >> s;

    int count = 0;

    if (s[0] != 'a')
    {
      count++;
    }
    if (s[1] != 'b')
    {
      count++;
    }
    if (s[2] != 'c')
    {
      count++;
    }

    if (count == 3)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
    q--;
  }
}
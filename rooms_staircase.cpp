#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q = 0;
  cin >> q;

  for (int r = 0; r < q; r++)
  {

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] != '1')
        count1++;
      else
      {
        break;
      }
    }
    // count2 = n - count1 - 1;

    for (int i = n - 1; i >= 0; i--)
    {
      if (s[i] != '1')
      {
        count2++;
      }
      else
      {
        break;
      }
    }

    if (count1 == n && count2 == n)
    {
      cout << n << endl;
      // return 0;
      continue;
    }
    // int temp = n - count2 - 1;

    if (count1 <= count2)
    {
      // from backside
      cout << (n - count1) * 2 << endl;
    }
    else
    {
      // from frontside
      cout << (n - count2) * 2 << endl;
    }
  }
}
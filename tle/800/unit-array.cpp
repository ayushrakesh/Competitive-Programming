#include <bits/stdc++.h>

using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    int n;
    cin >> n;
    vector<int> v;
    int a = 0;
    int cntneg = 0, cntpos = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;

      if (a == 1)
      {
        cntpos++;
      }
      else
      {
        cntneg++;
      }
      v.push_back(a);
    }

    if (cntpos < cntneg)
    {
      int t = cntneg - cntpos;
      if (t % 2 == 0)
      {
        ans = t / 2;
        cntpos += (t / 2);
        cntneg -= (t / 2);
      }
      else
      {
        ans = (t / 2) + 1;
        cntpos += (t / 2) + 1;
        cntneg -= (t / 2) + 1;
      }
    }

    if (cntneg % 2 != 0)
    {
      ans++;
    }

    cout << ans << endl;
  }
}
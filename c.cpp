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

    if (n == 1)
    {
      cout << -1 << endl;
      continue;
    }
    vector<int> v;
    int t = 0;
    bool b = false;

    for (int i = 0; i < n; i++)
    {
      cin >> t;
      v.push_back(t);
    }

    for (int i = 0; i >= 1; i--)
    {
      if (v[i] != v[i - 1])
      {
        cout << n - i << endl;
        b = true;
        break;
      }
    }

    if (!b)
    {
      cout << -1 << endl;
    }
  }
}
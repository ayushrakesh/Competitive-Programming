#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 0;
  cin >> t;

  while (t--)
  {
    int k, q;
    cin >> k >> q;

    vector<int> v;
    int a = 0;

    for (int i = 0; i < k; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    vector<int> w;

    for (int i = 0; i < q; i++)
    {
      cin >> a;
      w.push_back(a);
    }

    vector<int> res;

    for (int i = 0; i < q; i++)
    {
      int n = w[i];

      while (v[0] <= n)
      {
        int ans = 0;
        for (int j = 0; j < k; j++)
        {
          if (v[j] <= n)
          {
            ans++;
          }
        }

        n = n - ans;
        /* code */
      }

      res.push_back(n);
    }

    for (int o = 0; o < res.size(); o++)
    {
      cout << res[o] << " ";
    }

    cout << endl;
  }
}
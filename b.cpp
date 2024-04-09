#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;
  while (q--)
  {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> v;

    int a = 0;
    int s = n * n;
    for (int i = 0; i < s; i++)
    {
      cin >> a;
      v.push_back(a);
    }

    sort(v.begin(), v.end());

    int st = v[0];

    vector<int> res;
    res.push_back(st);

    for (int i = 0; i < n; i++)
    {
      int g = st;

      for (int j = 1; j < n; j++)
      {
        res.push_back(st + c);
        st = st + c;
      }
      st = g;
      st = st + d;

      // if (i !n - 1 && j != n - 1)
      // {
      res.push_back(st);
      // }
    }
    res.pop_back();
    sort(res.begin(), res.end());

    // for (int i = 0; i < n * n; i++)
    // {
    //   /* code */
    //   cout << v[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < n * n; i++)
    // {
    //   /* code */
    //   cout << res[i] << " ";
    // }
    // cout << endl;

    if (v == res)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
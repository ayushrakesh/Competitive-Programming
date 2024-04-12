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
    // int cnt = 0;
    bool flag = false;
    vector<int> v;
    int a = 0;
    map<int, int> mmp;

    // // if (n == 1)
    // {
    //   cout << -1 << endl;
    //   continue;
    // }

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);

      mmp[a]++;
    }

    if (mmp.size() == 1)
    {
      cout << -1 << endl;
      continue;
    }

    int x = v[0];
    int ix = 0;
    int ans = n;

    for (int i = 0; i < n; i++)
    {
      if (v[i] == v[0])
      {
        ix++;
      }
      else
      {
        ans = min(ans, ix);
        ix = 0;
      }
    }

    ans = min(ans, ix);

    cout << ans << endl;
  }
}
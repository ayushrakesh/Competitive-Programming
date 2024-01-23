#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  for (; t; t--)
  {
    int n;
    cin >> n;

    vector<int> v(n + 2);
    for (int i = 1; i <= n; i++)
    {
      cin >> v[i];
    }
    v[n + 1] = 2000000001;
    v[0] = -2000000001;
    vector<long long> pref(n + 1), suff(n + 1);

    for (int i = 2; i <= n; i++)
    {
      if (abs(v[i] - v[i - 1]) < abs(v[i] - v[i + 1]))
        pref[i] = pref[i - 1] + 1;
      else
        pref[i] = pref[i - 1] + abs(v[i] - v[i - 1]);
    }

    for (int i = n - 1; i >= 1; i--)
    {
      if (abs(v[i] - v[i - 1]) > abs(v[i] - v[i + 1]))
        suff[i] = suff[i + 1] + 1;
      else
        suff[i] = suff[i + 1] + abs(v[i] - v[i + 1]);
    }

    int q;
    cin >> q;
    for (; q; q--)
    {
      int L, R;
      cin >> L >> R;
      if (L < R)
        cout << suff[L] - suff[R] << '\n';
      else
        cout << pref[L] - pref[R] << '\n';
    }
  }
  return 0;
}
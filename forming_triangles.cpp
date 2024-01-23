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

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      v[x]++;
    }

    long long cnt = 0;
    long long ans = 0;
    for (int i = 0; i <= n; i++)
    {
      if (v[i] >= 2)
        ans = ans + 1LL * cnt * v[i] * (v[i] - 1) / 2;
      if (v[i] >= 3)
        ans = ans + 1LL * v[i] * (v[i] - 1) * (v[i] - 2) / 6;
      cnt += v[i];
    }

    cout << ans << '\n';
  }
  return 0;
}
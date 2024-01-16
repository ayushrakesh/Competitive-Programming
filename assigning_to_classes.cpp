#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q != 0)
  {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < 2 * n; i++)
    {
      int a;
      cin >> a;
      v.push_back(a);
    }

    sort(v.begin(), v.end());

    int ans = 0;

    ans = abs(v[n] - v[n - 1]);

    cout << ans << endl;

    q--;
  }
}
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

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    int ans = 0;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
      if (v[i] == v[i - 1])
      {
        ans++;
      }
    }
    cout << ans << endl;
  }
}
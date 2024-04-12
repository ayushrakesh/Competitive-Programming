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

    if (n == 1)
    {
      cout << -1 << endl;
      continue;
    }

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }

    for (int i = n - 1; i >= 1; i--)
    {
      if (v[i] != v[i - 1])
      {
        cout << n - i << endl;
        flag = true;
        break;
      }
    }

    if (!flag)
    {
      cout << -1 << endl;
    }
  }
}
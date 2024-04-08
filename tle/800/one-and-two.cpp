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
    // long long pro = 1;
    int cnt1 = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      // pro = pro * a;
      if (a == 2)
      {
        cnt1++;
      }
      v.push_back(a);
    }
    // int k = -1;
    bool flag = false;

    // long long fro = 1;
    int cnt2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
      // fro = fro * v[i];
      // pro = pro / v[i];

      if (v[i] == 2)
      {
        cnt2++;
        cnt1--;
      }
      if (cnt1 == cnt2)
      {
        flag = true;
        cout << i + 1 << endl;
        break;
      }
      /* code */
    }

    if (!flag)
    {
      cout << -1 << endl;
    }
  }
}
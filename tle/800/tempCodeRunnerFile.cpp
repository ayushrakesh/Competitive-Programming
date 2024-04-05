#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    /* code */
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> res;
    bool flag = false;

    while (n && k >= 1)
    {

      if (k == x)
      {
        k--;
        continue;
      }
      int rem = n % k;
      int amount = n / k;

      for (int i = 0; i < amount; i++)
      {
        res.push_back(k);
      }

      if (rem == 0)
      {
        cout << "YES" << endl;
        flag = true;
        break;
      }
      n = rem;
      k--;

      /* code */
    }

    if (!flag)
    {
      cout << "NO" << endl;
      continue;
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
      cout << res[i] << " ";
    }
    cout << endl;
  }
}
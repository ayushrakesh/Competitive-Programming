#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    /* code */
    int n = 0;
    cin >> n;

    if (n == 1)
    {
      cout << 0 << endl;
      continue;
    }
    // vector<int> v;
    vector<long long> v;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    int i = 0;
    int cnt = 0;

    while (i < n - 1)
    {

      if ((v[i] % 2 == 0 && v[i + 1] % 2 == 0) || (v[i] % 2 == 1 && v[i + 1] % 2 == 1))
      {
        v[i] = v[i] * v[i + 1];
        cnt++;
        v.erase(v.begin() + i);
        // v.erase( i + 1);
        i = 0;
        // n--;
      }
      else
      {
        i++;
      }

      /* code */
    }
    cout << cnt << endl;
  }
}
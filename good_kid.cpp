#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q = 0;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int n;
    cin >> n;
    vector<int> v;
    int pro = 1;
    bool pres = false;

    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;

      if (a != 0)
      {
        pro *= a;
        pres = true;
      }
      v.push_back(a);
    }

    if (pres)
    {
      cout << pro << endl;
      continue;
    }
    int maxPro = pro;
    for (int i = 0; i < n; i++)
    {

      int newPro = (pro / v[i]) * (v[i] + 1);

      maxPro = max(maxPro, newPro);
    }
    cout << maxPro << endl;
  }
}
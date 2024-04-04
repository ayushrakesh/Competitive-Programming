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

    sort(v.begin(), v.end());

    vector<int> b;
    vector<int> c;

    b.push_back(v[0]);
    int ind = -1;

    for (int i = 1; i < n; i++)
    {
      if (v[i] > v[i - 1])
      {
        c.push_back(v[i]);
        ind = i;
        break;
      }
      else
      {
        b.push_back(v[i]);
      }
    }

    if (ind == -1)
    {
      cout << -1 << endl;
      continue;
    }
    for (int i = ind + 1; i < n; i++)
    {
      /* code */
      c.push_back(v[i]);
    }

    cout << b.size() << " " << c.size() << endl;

    for (int i = 0; i < b.size(); i++)
    {
      cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < c.size(); i++)
    {
      cout << c[i] << " ";
    }
    cout << endl;
  }
}
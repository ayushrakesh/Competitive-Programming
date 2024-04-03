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
    int b = 0;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
      cin >> b;

      v.push_back(b);
    }

    vector<int> w;
    w.push_back(v[0]);

    for (int i = 1; i < n;)
    {
      if (v[i] >= v[i - 1])
      {
        w.push_back(v[i]);
        i++;
      }
      else
      {
        w.push_back(1);
        w.push_back(v[i]);
        i++;
      }
    }

    cout << w.size() << endl;

    for (int i = 0; i < w.size(); i++)
    {
      cout << w[i] << " ";
    }
    cout << endl;
  }
}
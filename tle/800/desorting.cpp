#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v)
{
  for (int i = 0; i < v.size() - 1; i++)
  {
    if (v[i] > v[i + 1])
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    /* code */
    int n;
    cin >> n;
    vector<int> v;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }

    if (!isSorted(v))
    {
      cout << 0 << endl;
      continue;
    }
    int ind = -1;
    // int mini = INT_MAX;
    vector<int> w;

    for (int i = 0; i < n - 1; i++)
    {
      int diff = v[i + 1] - v[i];

      w.push_back(diff);
      // mini=min(mini,diff);
    }
    int mini = *min_element(w.begin(), w.end());

    for (int i = 0; i < w.size(); i++)
    {
      if (w[i] == mini)
      {
        if (w[i] % 2 == 0)
        {
          cout << ((w[i] + 1) / 2) + 1 << endl;
          break;
        }
        else
        {
          cout << (w[i] + 1) / 2 << endl;
          break;
        }
      }
    }
  }
}
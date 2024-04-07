#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<long long> &v)
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
    int n;
    cin >> n;
    vector<long long> v;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    bool flag = false;
    long long diff = 0;
    int index = -1;

    for (int i = 1; i < n; i++)
    {
      if (v[i] < v[i - 1])
      {
        diff = v[i - 1] - v[i];
        flag = true;
        v[i] = v[i] + diff;
        index = i;
        break;
      }
    }

    if (index == n - 1 || index == -1)
    {
      cout << "YES" << endl;
      continue;
    }
    if (flag)
    {
      for (int i = index + 2; i < n;)
      {
        v[i] = v[i] + diff;
        i += 2;
      }

      if (isSorted(v))
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }
}
#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &v)
{
  for (int i = 0; i < v.size() - 1; i++)
  {
    if (v[i] > v[i + 1])
      return false;
  }
  return true;
}
int main()
{
  // your code goes here

  int q = 0;
  cin >> q;

  while (q--)
  {
    int n;
    cin >> n;

    vector<int> v;
    int a = 0;
    bool flag = false;

    float pos = 0;
    float neg = 0;

    for (int i = 0; i < n - 1; i++)
    {
      cin >> a;

      if (a >= 0)
        pos = pos + a;

      else
        neg = neg + a;
      // if (a == k)
      // flag = true;
      v.push_back(a);
    }

    if (neg + pos != 0)
    {
      cout << -(neg + pos) << endl;
    }
    else
      cout << 0 << endl;
  }
}
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
    int n, k;
    cin >> n >> k;

    vector<int> v;
    int a = 0;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
      cin >> a;

      if (a == k)
        flag = true;
      v.push_back(a);
    }

    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
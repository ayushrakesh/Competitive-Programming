#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &v)
{

  int n = v.size();

  for (int i = 1; i < n; i++)
  {
    if (v[i] < v[i - 1])
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

    int a = 0;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }

    if (isSorted(v))
      cout << "YES" << endl;
    else if (k >= 2)
      cout
          << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}

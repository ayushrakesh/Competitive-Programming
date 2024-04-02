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

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    int mini = *min_element(v.begin(), v.end());

    if (isSorted(v))
      cout << "YES" << endl;

    else if (v[0] == mini)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
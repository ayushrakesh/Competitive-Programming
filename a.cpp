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

    int one = v[0];
    int second = 0;

    int cnt1 = 0, cnt2 = 0;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
      if (v[i] != one)
      {
        second = v[i];
        break;
        // second = v[i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (v[i] == one)
      {
        cnt1++;
      }
      else if (v[i] == second)
      {
        cnt2++;
      }
    }

    if (cnt1 == n || cnt2 == n)
      cout << "YES" << endl;
    else if (cnt1 + cnt2 == n && abs(cnt1 - cnt2) <= 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
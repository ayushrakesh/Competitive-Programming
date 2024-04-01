#include <bits/stdc++.h>
using namespace std;

bool isAllZero(vector<int> v)
{

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] != 0)
      return false;
  }
  return true;
}

bool allAnyNeg(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] < 0)
      return false;
  }
  return true;
}
bool can(vector<int> v)
{
  int n = v.size();
  if (n <= 2)
    return false;

  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += v[i];
  }
  if (sum % 2 != 0)
    return false;

  int maxi = *max_element(v.begin(), v.end());
  if (maxi * 2 > sum)
    return false;
  else
    return true;
}
int main()
{
  int q = 0;
  cin >> q;

  for (int t = 0; t < q; t++)
  {
    int n;
    cin >> n;
    bool flag = false;

    vector<int> v;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }

    if (can(v))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
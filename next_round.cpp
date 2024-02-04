#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k = 0;
  cin >> n >> k;

  vector<int> v;
  int a = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a;
    v.push_back(a);
  }

  int r = v[k - 1], count = 0;

  for (int i = 0; i < n; i++)
  {
    if (v[i] > 0 && v[i] >= r)
    {
      count++;
    }
  }
  cout << count << endl;
}
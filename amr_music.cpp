#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  // map<int, int> unmp;
  vector<int> v;
  vector<int> w;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
    w.push_back(a);
    // unmp.insert({i + 1, a});
  }

  int sum = 0;
  vector<int> z;

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++)
  {
    sum = sum + v[i];
    if (sum <= k)
    {
      z.push_back(v[i]);
    }
  }

  vector<int> y;
  vector<int>::iterator it;

  for (int i = 0; i < z.size(); i++)
  {
    for (int j = 0; j < n; j++)
    {
      /* code */
      it = find(y.begin(), y.end(), j + 1);
      if (z[i] == w[j] && (it == y.end()))
      {
        // cout << j + 1 << " ";
        y.push_back(j + 1);
        break;
      }
    }
  }
  cout << z.size() << endl;

  for (int i = 0; i < y.size(); i++)
  {
    cout << y[i] << " ";
  }
}
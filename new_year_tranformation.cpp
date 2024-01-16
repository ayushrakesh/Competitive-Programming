#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n = 0, t = 0;
  cin >> n;
  cin >> t;

  vector<long long> v;
  vector<long long> w;

  long long a = 0;

  for (long long i = 0; i < n - 1; i++)
  {
    cin >> a;
    v.push_back(a);
  }

  // long long b = 0;
  w.push_back(1);

  for (long long i = 1; i <= v.size();)
  {
    /* code */
    i = i + v[i - 1];
    if (i <= v.size())
    {
      w.push_back(i);
    }
    else if (i == n)
    {
      w.push_back(i);
      break;
    }
    else
    {
      break;
    }
  }

  for (long long i = 0; i < w.size(); i++)
  {
    if (t == w[i])
    {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
}
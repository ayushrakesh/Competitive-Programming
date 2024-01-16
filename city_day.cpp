#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  long long x, y;
  cin >> x;
  cin >> y;

  vector<long long> v;

  for (long long i = 0; i < n; i++)
  {
    long long d;
    cin >> d;
    v.push_back(d);
  }

  for (long long i = 0; i < v.size(); i++)
  {
    long long count = 0;

    long long minl = min(x, i);
    long long minr = min(y, n - i - 1);

    for (long long j = i - minl; j < i; j++)
    {
      if (v[i] < v[j])
      {
        count++;
      }
    }
    for (long long j = i + minr; j > i; j--)
    {
      if (v[i] < v[j])
      {
        count++;
      }
    }
    if (count == minr + minl)
    {
      cout << i + 1 << endl;
      break;
    }
  }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  vector<long long> v;

  for (long long i = 0; i < n; i++)
  {
    long long a;
    cin >> a;
    v.push_back(a);
  }

  long long buy = v[n - 1];
  long long sum = buy;

  for (long long i = n - 2; i >= 0; i--)
  {
    /* code */
    if (buy == 0)
      break;
    else if (buy <= v[i])
    {
      buy = buy - 1;
      sum += buy;
    }
    else
    {
      buy = v[i];
      sum += buy;
    }
  }
  cout << sum << endl;
}
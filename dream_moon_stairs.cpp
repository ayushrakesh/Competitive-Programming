#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n, m;

  cin >> n;
  cin >> m;

  if (m > n)
  {
    cout << -1 << endl;
  }
  else if (n == m)
  {
    cout << n << endl;
  }
  else
  {
    long long count = 0;
    while (n > 1)
    {
      /* code */
      n = n - 2;
      count++;
    }
  }
}
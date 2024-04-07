#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d - b >= 0 && c - a <= 0)
    {
      cout << 2 * (d - b) + (a - c) << endl;
    }
    else if (d - b >= 0 && c - a >= 0 && (d - b) >= (c - a))
    {
      cout << 2 * (d - b) - (c - a) << endl;
    }
    else
      cout << -1 << endl;
  }
}
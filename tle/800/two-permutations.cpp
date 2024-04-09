#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    int n, a, b;
    cin >> n >> a >> b;

    if (n == a && a == b && b == n)
    {
      cout << "YES" << endl;
      continue;
    }
    if (n - (a + b) >= 2)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
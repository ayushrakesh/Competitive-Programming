#include <bits/stdc++.h>

using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    long long n, k;
    cin >> n >> k;

    if (n % 2 == 0)
      cout << "Yes" << endl;
    else
    {

      long long rem = n % k;
      if (rem % 2 == 0)
      {
        cout << "YES" << endl;
        continue;
      }
      else
      {
        cout << "NO" << endl;
        continue;
      }

      if (1 % k == 0)
      {
        cout << "YES" << endl;
        continue;
      }
      else
      {
        cout << "NO" << endl;
        continue;
      }
    }
  }
}
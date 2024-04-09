#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    /* code */
    int n = 0;
    cin >> n;

    int ans = 0;

    if (n >= 100000 && n <= 999999)
    {
      ans = n / 100000;
      ans = 45 + ans;
    }
    else if (n >= 10000 && n <= 99999)
    {
      ans = n / 10000;
      ans = 36 + ans;
    }
    else if (n >= 1000 && n <= 9999)
    {
      ans = n / 1000;
      ans = 27 + ans;
    }
    else if (n >= 100 && n <= 999)
    {
      ans = n / 100;
      ans = 18 + ans;
    }
    else if (n >= 10 && n <= 99)
    {
      ans = n / 10;
      ans = 9 + ans;
    }
    else if (n >= 1 && n <= 9)
    {
      ans = n;
    }
    cout << ans << endl;
  }
}
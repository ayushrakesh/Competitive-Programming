#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int sum = 0, h = 1;

  if (n == 1)
  {
    cout << 1 << endl;
    return 0;
  }
  else
  {
    while (n > 0)
    {
      /* code */
      sum = sum + (h * (h + 1)) / 2;

      if (sum <= n)
      {
        h++;
        n = n - sum;
      }
      else
      {
        break;
      }
    }
    cout << h << endl;
  }
}
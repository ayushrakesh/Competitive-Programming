#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  // string s = to_string(n);
  int lucky = 0;

  while (n != 0)
  {
    /* code */
    int ld = n % 10;
    if (ld == 4 || ld == 7)
    {
      lucky++;
    }
    n = n / 10;
  }

  if (lucky == 0)
  {
    cout << "NO" << endl;
    return 0;
  }
  while (lucky != 0)
  {
    int t = lucky % 10;
    if (!(t == 4 || t == 7))
    {
      cout << "NO" << endl;
      return 0;
    }
    lucky = lucky / 10;
  }
  cout << "YES" << endl;
}

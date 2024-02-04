#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    int a, b, c, count = 0;
    cin >> a >> b >> c;
    if (a == 1)
      count++;
    if (b == 1)
      count++;
    if (c == 1)
      count++;

    if (count >= 2)
      res++;
  }
  cout << res << endl;
}
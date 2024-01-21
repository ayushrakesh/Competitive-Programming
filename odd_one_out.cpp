#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  while (n != 0)
  {
    /* code */
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
      cout << c << endl;
    }
    else if (b == c)
    {
      cout << a << endl;
    }
    else
    {
      cout << b << endl;
    }
    n--;
  }
}
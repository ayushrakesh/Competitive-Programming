#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    /* code */
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b)
      cout << "Second" << endl;
    else if (b < a)
      cout << "First" << endl;

    else
    {
      if (c % 2 == 0)
      {
        cout << "Second" << endl;
      }
      else
        cout << "First" << endl;
    }
  }
}
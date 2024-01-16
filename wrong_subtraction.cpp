#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, k;
  cin >> n;
  cin >> k;

  int temp = n;

  while (k != 0)
  {
    int last = temp % 10;
    if (last > 0)
    {
      temp--;
    }
    else if (last == 0)
    {
      temp = temp / 10;
    }

    k--;
  }
  cout << temp << endl;
}
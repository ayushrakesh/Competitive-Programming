#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k, n, w;
  cin >> k;
  cin >> n;
  cin >> w;

  int sum = 0;
  int i = 1;

  while (w != 0)
  {
    sum = sum + k * i;
    i++;
    w--;
  }

  if (sum > n)
  {
    cout << sum - n << endl;
  }
  else
  {
    cout << 0 << endl;
  }
}
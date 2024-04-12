#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    int n, m, k;
    cin >> n >> m >> k;

    if (n == 1 || m == 1)
    {
      cout << "NO" << endl;
    }
    else if (k >= m)
    {
      cout << "NO" << endl;
    }
    else if (k < m)
    {
      // else if (k < m && m>=n){
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
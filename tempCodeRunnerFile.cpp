#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    int n;
    cin >> n;

    vector<int> v;

    int a = 0;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      if (a == 2)
      {
        cnt++;
      }
    }

    if (cnt % 8 == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
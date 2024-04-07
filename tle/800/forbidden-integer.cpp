#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    /* code */
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> res;

    if (x != 1)
    {
      cout << "YES" << endl;
      cout << n << endl;
      for (int i = 0; i < n; i++)
      {
        cout << 1 << " ";
      }
      cout << endl;
    }
    else if (x == 1)
    {
      if (k == 1)
      {
        cout << "NO" << endl;
        continue;
      }
      else if (k == 2)
      {
        if (n % 2 == 0)
        {
          cout << "YES" << endl;
          cout << n / 2 << endl;
          for (int i = 0; i < n / 2; i++)
          {
            cout << 2 << " ";
          }
          cout << endl;
          continue;
        }
        else
        {
          cout << "NO" << endl;
          continue;
        }
      }
      else if (k >= 3)
      {
        cout << "YES" << endl;

        if (n % 2 == 0)
        {
          // cout << "YES" << endl;
          cout << n / 2 << endl;
          for (int i = 0; i < n / 2; i++)
          {
            cout << 2 << " ";
          }
          cout << endl;
        }
        else
        {
          // cout << "YES" << endl;
          cout << n / 2 << endl;

          int g = (n / 2) - 1;

          for (int i = 0; i < g; i++)
          {
            cout << 2 << " ";
          }
          cout << 3 << endl;
          cout << endl;
        }
      }
      else if (n == 1)
      {
        cout << "NO" << endl;
      }
    }
  }
}
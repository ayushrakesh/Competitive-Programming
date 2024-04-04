#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    /* code */
    int n;
    cin >> n;
    vector<int> v;
    int a = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      sum += a;
      v.push_back(a);
    }
    int sum1 = 0;
    int sum2 = sum;
    bool flag = false;

    for (int i = 0; i < n - 1; i++)
    {
      sum1 = sum1 + v[i];
      sum2 = sum2 - v[i];

      if ((sum1 % 2 == 0 && sum2 % 2 == 0) || (sum1 % 2 == 1 && sum2 % 2 == 1))
      {
        cout << "YES" << endl;
        flag = true;
        break;
      }
    }

    if (!flag)
    {
      cout << "NO" << endl;
    }
  }
}
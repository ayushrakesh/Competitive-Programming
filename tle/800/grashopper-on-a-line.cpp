#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    /* code */
    int x, k;
    cin >> x >> k;

    vector<int> v;
    int a = 0;

    int cnt = 0;
    int j = x;
    int sum = 0;

    while (j >= 1)
    {
      /* code */
      if (j % k == 0)
      {
        j--;
        continue;
      }

      v.push_back(j);
      sum += j;
      if (sum == x)
      {
        break;
      }
      j = x - j;
      // cnt++;
    }
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
      /* code */
      cout << v[i] << " ";
    }
    cout << endl;
  }
}
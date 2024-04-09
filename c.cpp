#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> v;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    int cnt = 0;
    int j = n - 1;

    for (int i = 0; k > 0 && j >= 0 && i < n;)
    {

      if (v[i] <= k)
      {
        cnt++;
        k = k - v[i];
        i++;
      }
      else
      {
        k--;
        v[i]--;
        // i--;
      }
      if (cnt == n)
      {
        break;
      }
      if (v[j] <= k)
      {
        cnt++;
        k = k - v[j];
        j--;
      }
      else
      {
        k--;
        v[j]--;
        // j++;
      }

      if (cnt == n)
      {
        break;
      }
      /* code */
    }

    cout << cnt << endl;
  }
}

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

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }

    int maxi = INT_MIN;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
      if (v[i] == 0)
      {
        cnt++;
      }
      else
      {
        cnt = 0;
      }
      maxi = max(maxi, cnt);
    }
    cout << maxi << endl;
  }
}
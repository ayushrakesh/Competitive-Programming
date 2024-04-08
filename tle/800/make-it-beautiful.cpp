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
    // long long pro = 1;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    // int sum = v[0];

    int maxi = *max_element(v.begin(), v.end());

    if (v[0] == maxi)
    {
      cout << "NO" << endl;
      continue;
    }

    swap(v[0], v[n - 1]);

    if (v[1] == maxi)
    {
      swap(v[1], v[n - 1]);
    }
    cout << "YES" << endl;
    // cout<<maxi<<" ";
    for (int i = 0; i < n; i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;
  }
}
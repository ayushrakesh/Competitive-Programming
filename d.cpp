#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q = 0;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int n;
    cin >> n;

    vector<int> v;
    int a = 0;

    for (int j = 0; j < n; j++)
    {
      cin >> a;
      v.push_back(a);
    }

    int resu[n];

    // int sum = 0;

    for (int k = 0; k < n; k++)
    {
      int res = 0;
      int prefSum = 0;

      unordered_map<int, int> mmp;

      mmp[0] = 1;

      for (int i = 0; i < v.size(); i++)
      {
        prefSum += v[i];
        res += mmp[prefSum - v[k]];
        mmp[prefSum]++;
      }

      resu[v[k] - 1] = res;
    }

    for (int l = 0; l < n; l++)
    {
      cout << resu[l] << " ";
    }
    cout << endl;
  }
}
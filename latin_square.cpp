#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q != 0)
  {
    int n;
    cin >> n;

    vector<int> v;

    int a;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
      sum = sum + v[i];
    }

    float f = sqrt(sum);
    int i = f;

    if (f - i == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }

    q--;
  }
}
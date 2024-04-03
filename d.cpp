#include <bits/stdc++.h>
using namespace std;
int main()
{

  /* code */
  int n;
  cin >> n;

  int a = 0;
  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    cin >> a;

    if (a < 0)
    {
      a = -a;
    }
    v.push_back(a);
  }

  sort(v.begin(), v.end());

  cout << v[0] << endl;
}
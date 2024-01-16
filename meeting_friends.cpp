#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 0, b = 0, c = 0;

  cin >> a;
  cin >> b;
  cin >> c;

  int first = min({a, b, c});
  int third = max({a, b, c});
  int sec = 0;

  vector<int> v = {a, b, c};

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] != first && v[i] != third)
    {
      sec = v[i];
    }
  }

  cout << (sec - first) + (third - sec) << endl;
}
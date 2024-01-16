#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cases;
  cin >> cases;

  while (cases != 0)
  {
    int n = 0;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v;

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '-')
      {
        v.push_back(-1);
      }
      else
      {
        v.push_back(1);
      }
    }

    sort(v.begin(), v.begin() + v.size());

    // for (int i = 0; i < v.size(); i++)
    // {
    //   cout << v[i] << " ";
    // }

    int minus = 0;
    int plus = 0;
    for (int i = 0; i < v.size(); i++)
    {
      if (v[i] == -1)
      {
        minus++;
      }
      if (v[i] == 1)
      {
        plus++;
      }
    }
    int diff = 0;
    if (minus > plus)
    {
      diff = minus - plus
    }
    else
    {
      diff = plus - minus;
    }

    cout << diff << endl;

    cases--;
  }
}
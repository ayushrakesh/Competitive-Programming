#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  vector<char> v;

  for (int i = 0; i < s.length(); i = i + 2)
  {
    v.push_back(s[i]);
  }

  sort(v.begin(), v.end());

  // cout << v[0] << endl;

  for (int i = 0; i < v.size(); i++)
  {
    if (i == v.size() - 1)
    {
      cout << v[i] << endl;
    }
    else
    {
      cout << v[i] << "+";
    }
  }
}
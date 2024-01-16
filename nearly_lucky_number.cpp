#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  string s = to_string(n);
  int lucky = 0;

  for (int i = 0; i < s.length(); i++)
  {

    if (s[i] == 52 || s[i] == 55)
    {
      lucky++;
    }
  }
  if (lucky == 4 || lucky == 7)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}

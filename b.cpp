#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;

  cin >> q;

  while (q--)
  {
    /* code */
    int n, m;
    cin >> n >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;

    int cnt = 0;
    bool flag = false;

    for (int i = 0; i < 10; i++)
    {
      if (x.find(s) != string::npos)
      {
        cout << cnt << endl;
        flag = true;
        break;
      }
      else
      {
        cnt++;
        x = x + x;
      }
    }
    if (!flag)
    {
      cout << -1 << endl;
    }
  }
}
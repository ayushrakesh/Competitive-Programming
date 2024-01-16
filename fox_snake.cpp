#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n;
  cin >> m;

  bool line = true;
  bool right = true;

  while (n != 0)
  {
    if (line)
    {
      for (int i = 1; i <= m; i++)
      {
        cout << "#";
      }
      cout << endl;
      line = !line;
    }
    else
    {

      if (right)
      {
        for (int i = 1; i < m; i++)
        {
          cout << ".";
        }
        cout << "#" << endl;
        right = !right;
      }
      else
      {
        cout << "#";
        for (int i = 1; i < m; i++)
        {
          cout << ".";
        }
        cout << endl;
        right = !right;
      }

      line = !line;
    }

    n--;
    /* code */
  }
}
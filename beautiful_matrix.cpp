#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[5][5];
  pair<int, int> pos;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> a[i][j];
    }
  }
  // cout << "Array is ->" << endl;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      // cout << a[i][j] << " ";
      if (a[i][j] == 1)
      {
        pos.first = i + 1;
        pos.second = j + 1;
      }
    }
    // cout << endl;
  }

  int moves = max(3 - pos.first, pos.first - 3) + max(3 - pos.second, pos.second - 3);

  cout << moves << endl;
}

#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &v)
{
  for (int i = 0; i < v.size() - 1; i++)
  {
    if (v[i] > v[i + 1])
      return false;
  }
  return true;
}
int main()
{
  // your code goes here

  int q = 0;
  cin >> q;

  while (q--)
  {
    char c;

    int score = 0;

    for (int i = 1; i <= 10; i++)
    {
      for (int j = 1; j <= 10; j++)
      {
        /* code */
        cin >> c;

        if (c == 'X')
        {
          if (i == 1 || j == 1 || i == 10 || j == 10)
          {
            score++;
          }
          else if (i == 2 || j == 2 || i == 9 || j == 9)
          {
            score += 2;
          }
          else if (i == 3 || j == 3 || i == 8 || j == 8)
          {
            score += 3;
          }
          else if (i == 4 || j == 4 || i == 7 || j == 7)
          {
            score += 4;
          }
          else
          {
            score += 5;
          }
        }
      }
    }
    cout << score << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < (4 - i); j++)
    {
      /* code */
      cout << " ";
    }
    for (char j = 'A'; j <= i + 1; j++)
    {
      /* code */
      cout << 'A' + j;
    }
    char k = 'A' + i + 1;

    for (char j = k; j >= 'A'; j--)
    {
      /* code */
      cout << j;
    }

    for (int j = (4 - i); j >= 0; j--)
    {
      /* code */
      cout << " ";
    }
    cout << endl;
  }
}
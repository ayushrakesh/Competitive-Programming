// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//   int n = 0;
//   cin >> n;

//   int j = n / 7;
//   int k = (n - (j * 7)) % 4;

//   if (k == 0)
//   {
//     for (int i = 0; i < (n - (j * 7)) / 4; i++)
//     {
//       /* code */ cout << 4;
//     }
//     for (int i = 0; i < j; i++)
//     {
//       /* code */ cout << 7;
//     }
//   }
//   else
//   {
//     cout << -1 << endl;
//     return 0;
//   }
// }

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

  bool flag = false;
  int n;
  cin >> n;

  if (n < 4)
  {
    cout << "-1";
    return 0;
  }
  for (int i = n / 7; i >= 0; i--)
  {
    int j = n - (i * 7);
    if (j % 4 == 0)
    {
      flag = true;
      for (int x = 0; x < j / 4; x++)
        cout << 4;
      for (int y = 0; y < i; y++)
        cout << 7;
      break;
    }
  }
  if (!flag)
    cout << -1 << endl;
}
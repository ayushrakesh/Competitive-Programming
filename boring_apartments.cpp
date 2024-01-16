#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q != 0)
  {
    int a;
    cin >> a;

    int b = a % 10;
    int temp = 0;
    int n = a;

    switch (b)
    {

    case 2:
      temp = 10 * 1;
      break;

    case 3:
      temp = 10 * 2;
      break;

    case 4:
      temp = 10 * 3;
      break;

    case 5:
      temp = 10 * 4;
      break;

    case 6:
      temp = 10 * 5;
      break;

    case 7:
      temp = 10 * 6;
      break;

    case 8:
      temp = 10 * 7;
      break;

    case 9:
      temp = 10 * 8;
      break;
    }
    int count = 0;

    while (n != 0)
    {
      int rem = n % 10;
      if (rem != 0)
      {
        count++;
        n = n / 10;
      }
    }

    int temp2 = count * (count + 1) / 2;

    cout << temp2 + temp << endl;

    q--;
  }
}
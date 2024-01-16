#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;
  int n;
  while (test--)
  {
    cin >> n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
      if (temp % 10 != 0)
      {
        count++;
      }
      temp = temp / 10;
    }
    cout << count << endl;
    int i = 0;
    while (n != 0)
    {
      if (n % 10 != 0)
      {
        cout << (n % 10) * pow(10, i) << " ";
      }
      n = n / 10;
      i++;
    }
  }
}
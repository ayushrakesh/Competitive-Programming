#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here

  int q = 0;
  cin >> q;

  while (q--)
  {
    int n;
    cin >> n;

    if (n % 3 == 0)
      cout << "Second" << endl;
    else
      cout << "First" << endl;
  }
}
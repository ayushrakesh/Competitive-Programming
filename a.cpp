#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  // char t = (char)2;

  // cout << t << endl;
  while (q--)
  {
    int n, a, b;
    cin >> n >> a >> b;

    int f = n * a;

    int s = (n / 2) * b + (n % 2) * a;

    cout << min(f, s) << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n = 0, k = 0, l = 0, c = 0, d = 0, p = 0, nl = 0, np = 0;
  cin >> n;
  cin >> k;
  cin >> l;
  cin >> c;
  cin >> d;
  cin >> p;
  cin >> nl;
  cin >> np;

  int drinks = k * l;
  int slices = c * d;

  int toasts = min({drinks / nl, slices, p / np});

  cout << toasts / n << endl;
}
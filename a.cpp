#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int xxor = 0;

  for (int i = 0; i < n; i++)
  {
    int a = 0;
    cin >> a;
    xxor = xxor xor a;
  }
  cout << xxor << endl;
}
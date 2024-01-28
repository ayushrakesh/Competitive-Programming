#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cases;
  cin >> cases;

  while (cases != 0)
  {
    long long n, pos = 0;
    cin >> n;
    string s;
    cin >> s;

    for (long long i = 0; i < n; i++)
    {
      if (s[i] == '+')
        pos++;
      else
        pos--;
    }
    cout << abs(pos) << endl;

    cases--;
  }
}
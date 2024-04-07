#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q = 0;
  cin >> q;

  while (q--)
  {
    int n;
    cin >> n;
    int a = 0;
    vector<int> v;
    int xxor = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      xxor = xxor xor a;
      v.push_back(a);
    }

    if (xxor != 0)
    {
      if (n % 2 == 0)
      {

        cout << -1 << endl;
      }
      else
      {
        cout << xxor << endl;
      }
    }
    else
    {
      cout << 0 << endl;
    }
  }
}
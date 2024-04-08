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
    // int a = 0;
    string s;
    cin >> s;
    // vector<int> v;
    // int xxor = 0;
    int ans = n;

    int j = n - 1;
    for (int i = 0; i < n && j >= i; i++)
    {
      if (s[i] != s[j])
      {
        j--;
        ans -= 2;
      }
      else
      {
        break;
      }
    }

    cout << ans << endl;
  }
}
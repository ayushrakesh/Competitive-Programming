#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q = 0;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int n, k;
    cin >> n >> k;

    string s = "";
    bool isfirst = true;

    for (int l = 0; l < n; l++)
    {
      if (isfirst)
      {
        for (int j = 0; j < k; j++)
        {
          char c = 97 + j;
          s = s + c;
        }
      }
      else
      {
        for (int j = k - 1; j >= 0; j--)
        {
          char c = 97 + j;
          s = s + c;
        }
      }

      isfirst = !isfirst;
        }
    cout << s << endl;
  }
}
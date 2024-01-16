#include <bits/stdc++.h>
using namespace std;

int main()
{

  int q = 0;
  cin >> q;

  while (q != 0)
  {
    int n;
    cin >> n;
    // vector<int> v;

    // bool isFirst = true;
    // vector<pair<int, int>> v2;

    // for (int i = 0; i < n; i++)
    // {
    //   v.push_back(i + 1);
    // }

    // for (int i = v.size() - 1; i > 0; i--)
    // {

    //   if (v.size() == 2)
    //   {
    //     v2.push_back(make_pair(v[0], v[1]));
    //     cout
    //         << (v[0] + v[1]) / 2 << endl;
    //     break;
    //   }

    //   else if (isFirst)
    //   {
    //     int a = (v[i] + v[i - 2]) / 2;

    //     v2.push_back(make_pair(v[i - 2], v[i]));
    //     v.erase(v.begin() + i);
    //     v.erase(v.begin() + i - 2);
    //     v.push_back(a);
    //     sort(v.begin(), v.end());

    //     isFirst = false;
    //   }
    //   else
    //   {
    //     int b = (v[i] + v[i - 1]) / 2;

    //     v2.push_back(make_pair(v[i - 1], v[i]));
    //     v.erase(v.begin() + i);
    //     v.erase(v.begin() + i - 1);
    //     v.push_back(b);
    //     sort(v.begin(), v.end());
    //   }
    // }

    // for (int i = 0; i < v2.size(); i++)
    // {
    //   cout << v2[i].first << " " << v2[i].second << endl;
    // }
    pair<int, int> p(n - 2, n);
    bool isFirst = true;
    bool isSecond = true;

    for (int i = n; i > 0; i--)
    {
      /* code */
      if (i == 3)
      {
        cout << 2 << endl;
        cout << 1 << " " << 2 << endl;
        break;
      }
      else if (i == 2)
      {
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        break;
      }

      else
      {
        if (isFirst)
        {
          cout << i - 2 << " " << i << endl;
          isFirst = false;
          i++;
        }
        else if (isSecond)
        {
          cout << i - 1 << " " << i - 1 << endl;
          isSecond = false;
        }
        else
        {
          cout << i - 2 << " " << i << endl;
        }
      }
    }

    q--;
  }
}
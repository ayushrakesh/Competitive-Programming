#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
  }

  int w[n];
  bool isLessneg = false;
  bool isLesspos = false;

  for (int i = 0; i < n; i++)
  {
    if (v[i] % 2 == 0)
    {
      w[i] = v[i] / 2;
    }
    else
    {
      if (v[i] > 0)
      {
        if (!isLesspos)
        {
          w[i] = v[i] / 2 + 1;
          isLesspos = !isLesspos;
        }
        else
        {
          w[i] = v[i] / 2;
          isLesspos = !isLesspos;
        }
      }
      else
      {
        if (!isLessneg)
        {
          w[i] = v[i] / 2 - 1;
          isLessneg = !isLessneg;
        }
        else
        {
          w[i] = v[i] / 2;
          isLessneg = !isLessneg;
        }
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << w[i] << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v;
  while (n != 0)
  {
    int h;
    cin >> h;
    v.push_back(h);
    n--;
  }
  int mini = *min_element(v.begin(), v.end());

  int maxi = *max_element(v.begin(), v.end());

  int count = 0;
  int min_index = 0;
  int max_index = 0;

  // cout << "-i << endl;
  // for (int i = v.size(); i > 0; i--)
  // {
  //   if (v[i] == mini)
  //   {
  //     min_index = i;
  //     break;
  //   }
  // }
  // for (int i = 0; i < v.size(); i++)
  // {
  //   if (v[i] == maxi)
  //   {
  //     max_index = i;
  //     break;
  //   }
  // }

  for (int i = v.size() - 1; i >= 0; i--)
  {
    if (v[i] == mini)
    {
      count = v.size() - i - 1;
      min_index = i;
      break;
    }
  }

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == maxi)
    {
      count = count + i;
      max_index = i;
      break;
    }
  }

  if (max_index > min_index)
  {
    cout << count - 1 << endl;
  }
  else
  {
    cout << count << endl;
  }
}

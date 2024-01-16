#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int days = 1;
  int sum = 0;
  vector<int> v;

  int answer = 0;

  for (int i = 0; i < 7; i++)
  {
    int c;
    cin >> c;
    v.push_back(c);
  }

  for (int i = 0; i < 7;)
  {

    sum = sum + v[i];

    if (sum >= n)
    {
      answer = i + 1;
      break;
    }
    if (i == 6)
    {
      i = 0;
    }
    else
    {
      i++;
    }
  }

  cout << answer << endl;
}
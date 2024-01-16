#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  string s;
  cin >> s;

  int count = 1;

  for (int i = 0; i < s.length();)
  {
    cout << s[i];

    i = i + count;

    count++;
  }
}
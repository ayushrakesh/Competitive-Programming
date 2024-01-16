#include <bits/stdc++.h>
using namespace std;
int main()
{

  string name;
  cin >> name;

  int count = 0;

  for (int i = 0; i < name.length(); i++)
  {
    bool b = false;

    for (int j = 0; j < name.length() && j != i; j++)
    {
      if (name[i] == name[j])
      {
        b = true;
      }
    }

    if (!b)
    {
      count++;
    }
  }

  if (count % 2 == 0)
  {
    cout << "CHAT WITH HER!" << endl;
  }
  else
  {
    cout << "IGNORE HIM!" << endl;
  }
}
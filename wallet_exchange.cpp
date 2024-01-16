#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cases = 0;
  cin >> cases;

  for (int i = 0; i < cases; i++)
  {

    int a, b;
    cin >> a;
    cin >> b;

    string chance = "Alice";

    while (a != 0 || b != 0)
    {

      if (chance == "Alice")
      {
        if (a < b)
        {
          if (a == 0)
          {
            swap(a, b);
            a--;
            chance = "Bob";
            continue;
          }
          a--;
        }
        else
        {
          if (b == 0)
          {
            a--;
            chance = "Bob";
            continue;
          }
          swap(a, b);
          a--;
        }
        chance = "Bob";
        continue;
      }
      if (chance == "Bob")
      {
        if (a < b)
        {
          if (a == 0)
          {
            b--;
            chance = "Alice";
            continue;
          }
          swap(a, b);
          b--;
        }
        else
        {
          if (b == 0)
          {
            swap(a, b);
            b--;
            chance = "Alice";
            continue;
          }
          b--;
        }
        chance = "Alice";
        continue;
      }
    }
    if (chance == "Alice")
    {
      cout << "Bob" << endl;
    }
    else
    {
      cout << "Alice" << endl;
    }
    }
}
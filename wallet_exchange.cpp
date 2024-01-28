#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cases = 0;
  cin >> cases;

  for (int i = 0; i < cases; i++)
  {

    long long a, b;
    cin >> a;
    cin >> b;

    long long sum = a + b;

    if (sum % 2 == 0)
    {
      cout << "Bob" << endl;
    }
    else
    {
      cout << "Alice" << endl;
    }
  }
}
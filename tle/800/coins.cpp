#include "bits/stdc++.h"
using namespace std;

void print(string printable)
{
  cout << printable << endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int test_cases;
  cin >> test_cases;

  while (test_cases--)
  {
    long long n;
    long long k;
    cin >> n;
    cin >> k;

    if (n % 2 == 0)
    {
      print("YES");
      continue;
    }

    if (n % k == 0)
    {
      print("YES");
      continue;
    }

    bool yes = false;

    // ! n is odd from here on out
    if (!(k % 2 == 0))
    { // ! k is odd
      yes = true;
    }

    yes ? print("YES") : print("NO");
  }

  return 0;
}

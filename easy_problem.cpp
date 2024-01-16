#include <bits/stdc++.h>
using namespace std;
int main()

{

  int n;
  cin >> n;
  string prob = "EASY";

  while (n != 0)
  {
    int op;
    cin >> op;

    if (op == 1)
    {
      prob = "HARD";
    }
    n--;
  }

  cout << prob << endl;
}
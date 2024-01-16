// 4027723   Jul 5, 2013 7:56:08 PM	fuwutu	 268B - Buttons	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long g = 1;
  long long count = n;

  for (int i = g; i <= n - 1; i++)
  {
    /* code */
    count = count + 1 + (n - i - 1) * (i + 1);
  }
  cout << count << endl;

  return 0;
}
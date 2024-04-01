#include <bits/stdc++.h>
using namespace std;
// Returns true if s1 is substring of s2
int isSubstring(char *s1, char *s2)
{
  int M = strlen(s1);
  int N = strlen(s2);

  /* A loop to slide pat[] one by one */
  for (int i = 0; i <= N - M; i++)
  {
    int j;

    /* For current index i, check for
pattern match */
    for (j = 0; j < M; j++)
      if (s2[i + j] != s1[j])
        break;

    if (j == M)
      return i;
  }

  return -1;
}

int main()
{
  int q = 0;
  cin >> q;

  for (int t = 0; t < q; t++)
  {
    int n;
    cin >> n;
    int count = 0;

    string s;
    cin >> s;
    string temp = s;
    vector<int> v;
    for (int i = 0; i < s.length() - 3; i++)
    {
      int res1 = isSubstring("map", temp.substr(0, 3 + i));
      int res2 = isSubstring("pie", temp.substr(0, 3 + i));

      if (res1 >= 0)
      {
        v.push_back(res1);
      }
      if (res2 >= 0)
      {
        v.push_back(res2);
      }

      if (res1 != -1 &&)
      {
        count++;
        // temp = temp.substr()
      }
      else if (res1 != -1 && res2 != -1)
      {
        count++;
        count++;
      }
    }

    cout << count << endl;
  }
}
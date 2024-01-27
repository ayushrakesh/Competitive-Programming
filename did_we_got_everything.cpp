#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q = 0;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int n, k, len;
    string t;

    cin >> n >> k >> len;
    cin >> t;

    string s = "";
    bool isfirst = true;

    for (int l = 0; l < n; l++)
    {
      if (isfirst)
      {
        for (int j = 0; j < k; j++)
        {
          char c = 97 + j;
          s = s + c;
        }
      }
      else
      {
        for (int j = k - 1; j >= 0; j--)
        {
          char c = 97 + j;
          s = s + c;
        }
      }

      isfirst = !isfirst;
    }
    cout << s << endl;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // int diffLen = abs(s.length() - t.length());
    // int maxLen = max(s.length(), t.length());

    vector<char> v;
    unordered_set<char> st;

    for (int q = 0; q < s.length(); q++)
    {
      st.insert(s[q]);
    }

    for (auto it : st)
    {
      int count1 = 0, count2 = 0;

      for (int q = 0; q < s.length(); q++)
      {
        if (s[q] == it)
        {
          count1++;
        }
      }

      for (int q = 0; q < t.length(); q++)
      {
        if (t[q] == it)
        {
          count2++;
        }
      }

      if (count2 < count1)
      {
        v.push_back(it);
      }
    }

    string ans = "";

    for (int q = 0; q < v.size(); q++)
    {
      ans = ans + v[i];
    }
  }
}
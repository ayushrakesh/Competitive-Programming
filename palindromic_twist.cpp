#include <bits/stdc++.h>
using namespace std;

bool func(string s, int n)
{
  if (n == 2)
  {
    vector<char> v1;
    vector<char> v2;

    vector<string> w;

    if (s[0] == 'a')
    {
      v1.push_back('b');
    }
    else if (s[0] == 'z')
    {
      v1.push_back('y');
    }
    else
    {
      v1.push_back(s[0] + 1);
      v1.push_back(s[0] - 1);
    }

    if (s[n - 1] == 'a')
    {
      v2.push_back('b');
    }
    else if (s[n - 1] == 'z')
    {
      v2.push_back('y');
    }
    else
    {
      v2.push_back(s[n - 1] - 1);
      v2.push_back(s[n - 1] + 1);
    }

    // vector<string> w = {v[0] + v[2], v[0] + v[3], v[1] + v[2], v[1] + v[3]};

    for (int i = 0; i < v1.size(); i++)
    {
      for (int j = 0; j < v2.size(); j++)
      {
        string s1(1, v1[i]);
        string s2(1, v2[j]);
        w.push_back(s1 + s2);
      }
    }

    for (int i = 0; i < w.size(); i++)
    {
      if (w[i].at(0) == w[i].at(1))
      {
        return true;
      }
    }
    return false;
  }

  return func(s.substr(1, n - 2), n - 2);
}
int main()
{
  int q;
  cin >> q;

  while (q != 0)
  {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int start = n / 2 - 1;
    int end = n / 2;

    int count = 0;

    for (int f = start; f >= 0; f--)
    {
      vector<char> v1;
      vector<char> v2;
      vector<string> w;

      if (s[f] == 'a')
      {
        v1.push_back('b');
      }
      else if (s[f] == 'z')
      {
        v1.push_back('y');
      }
      else
      {
        v1.push_back(s[f] + 1);
        v1.push_back(s[f] - 1);
      }

      if (s[end] == 'a')
      {
        v2.push_back('b');
      }
      else if (s[end] == 'z')
      {
        v2.push_back('y');
      }
      else
      {
        v2.push_back(s[end] - 1);
        v2.push_back(s[end] + 1);
      }

      // vector<string> w = {v[0] + v[2], v[0] + v[3], v[1] + v[2], v[1] + v[3]};

      for (int i = 0; i < v1.size(); i++)
      {
        for (int j = 0; j < v2.size(); j++)
        {
          string s1(1, v1[i]);
          string s2(1, v2[j]);
          w.push_back(s1 + s2);
        }
      }

      // cout << w[0] << " " << w[1] << " " << w[2] << " " << w[3] << endl;

      for (int i = 0; i < w.size(); i++)
      {
        if (w[i].at(0) == w[i].at(1))
        {
          count++;
          break;
        }
      }
      end++;
    }
    if (count == n / 2)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;

    q--;
  }
}
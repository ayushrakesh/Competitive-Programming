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

  for (int r = 0; r < q; r++)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = n - 1;

    for (int k = 0; k < n / 2; k++)
    {

      vector<char> v1;
      vector<char> v2;

      vector<string> w;

      if (s[k] == 'a')
      {
        v1.push_back('b');
      }
      else if (s[k] == 'z')
      {
        v1.push_back('y');
      }
      else
      {
        v1.push_back(s[k] + 1);
        v1.push_back(s[k] - 1);
      }

      if (s[l] == 'a')
      {
        v2.push_back('b');
      }
      else if (s[l] == 'z')
      {
        v2.push_back('y');
      }
      else
      {
        v2.push_back(s[l] - 1);
        v2.push_back(s[l] + 1);
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
      bool boole = false;
      for (int i = 0; i < w.size(); i++)
      {
        if (w[i].at(0) == w[i].at(1))
        {
          cout << "YES" << endl;
          break;
          boole = true;
        }
      }
      if (!boole)
      {
        cout << "NO" << endl;
      }

      l--;
    }
  }
}
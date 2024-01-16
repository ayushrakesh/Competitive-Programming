#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin >> n;
  vector<pair<int, int>> v;

  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a;
    cin >> b;

    v.push_back(make_pair(a, b));
  }

  // cout << v[0].first << " " << v[0].second << endl;
  int init = v[0].second;

  vector<int> resv;
  resv.push_back(init);

  for (int i = 1; i < v.size(); i++)
  {
    init = init - v[i].first;
    init = init + v[i].second;

    resv.push_back(init);
  }

  cout << *max_element(resv.begin(), resv.end()) << endl;
}
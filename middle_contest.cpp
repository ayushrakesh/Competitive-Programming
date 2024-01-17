#include <bits/stdc++.h>
using namespace std;
int main()
{
  string first, second;
  cin >> first >> second;

  float hr1 = stoi(first.substr(0, 2));
  int min1 = stoi(first.substr(3, 2));
  float hr2 = stoi(second.substr(0, 2));
  int min2 = stoi(second.substr(3, 2));

  float hrf = (hr1 + hr2) / 2;
  int hri = hrf;

  int mini_temp = (hrf - hri) * 60;

  int mini = (min1 + min2) / 2 + mini_temp;

  if (mini >= 60)
  {
    hri = hri + mini / 60;
    mini = mini % 60;
  }

  // cout << "hrf" << hrf << "hri" << hri << "mini_temp" << mini_temp << "mini" << mini << endl;

  if (hri / 10 == 0 && mini / 10 == 0)
  {
    cout << "0" << hri << ":"
         << "0" << mini << endl;
  }
  else if (hri / 10 != 0 && mini / 10 == 0)
  {
    cout << hri << ":"
         << "0" << mini << endl;
  }
  else if (hri / 10 == 0 && mini / 10 != 0)
  {
    cout << "0" << hri << ":"
         << mini << endl;
  }
  else
  {
    cout << hri << ":" << mini << endl;
  }
}
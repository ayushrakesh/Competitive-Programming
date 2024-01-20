#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m, n = 0;
  cin >> m >> n;

  int b[m][n];
  int a[m][n];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int a;
      cin >> a;
      b[i][j] = a;
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      a[i][j] = 0;
    }
  }

  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      int rowAnd = 1;
      int colAnd = 1;

      // Calculate logical AND for current row
      for (int k = 0; k < n; ++k)
      {
        rowAnd &= b[i][k];
      }

      // Calculate logical AND for current column
      for (int k = 0; k < m; ++k)
      {
        colAnd &= b[k][j];
      }

      // Store the result in the resultMatrix
      a[i][j] = rowAnd & colAnd;
    }
  }
  int temp[m][n];

  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      int rowAnd = 0;
      int colAnd = 0;

      // Calculate logical AND for current row
      for (int k = 0; k < n; ++k)
      {
        rowAnd |= a[i][k];
      }

      // Calculate logical AND for current column
      for (int k = 0; k < m; ++k)
      {
        colAnd |= a[k][j];
      }

      // Store the result in the resultMatrix
      temp[i][j] = rowAnd | colAnd;
    }
  }
  int count = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (temp[i][j] == b[i][j])
      {
        count++;
      }
    }
  }

  if (count == m * n)
  {
    cout << "YES" << endl;

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "NO" << endl;
  }
}
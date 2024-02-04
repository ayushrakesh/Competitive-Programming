string s;
  cin >> s;

  int l = 0;
  int c = 0;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= 97 && s[i] <= 112)
      l++;
    else
    {
      c++;
    }
  }

  cout << c << " " << l << endl;
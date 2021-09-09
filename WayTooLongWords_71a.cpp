#include <iostream>

using namespace std;

int main()
{
  int n, c;
  char c1, cn;
  cin >> n;
  char a[n][100]{0};
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
  {
    c = 0;
    c1 = a[i][0];
    for (int j = 0; j < 100; j++)
    {
      if (a[i][j] != '\0')
        c++;
    }
    cn = a[i][c - 1];
    if (c > 10)
      cout << c1 << c - 2 << cn << endl;
    else
      cout << a[i] << endl;
  }
}

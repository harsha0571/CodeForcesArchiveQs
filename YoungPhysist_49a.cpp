#include <iostream>

using namespace std;

int main()
{
    int n;
    signed int i, j, k, c1 = 0, c2 = 0, c3 = 0;
    cin >> n;
    for (int x = 0; x < n; x++)
    {
        cin >> i;
        cin >> j;
        cin >> k;
        c1 = c1 + i;
        c2 = c2 + j;
        c3 = c3 + k;
    }
    if (c1 == 0 && c2 == 0 && c3 == 0)
        cout << "YES";
    else
        cout << "NO";
}

#include <iostream>
using namespace std;
int main()
{

    int a[5][5];
    int ii, ij;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                ii = i;
                ij = j;
            }
        }

    int res = abs(2 - ii) + abs(2 - ij);
    cout << res << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n, c, co = 0;
    cin >> n;
    char a[n][3]{0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
    {
        c = 0;

        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 49)
                c++;
        }

        if (c >= 2)
            co++;
    }
    cout << co;
}

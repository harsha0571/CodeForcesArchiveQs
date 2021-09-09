#include <iostream>

using namespace std;

int main()
{
    int n, k, c = 0, co = 0;
    cin >> n >> k;
    int a[n];

    for (int j = 0; j < n; j++)
        cin >> a[j];

    c = a[k - 1];

    for (int j = 0; j < n; j++)
    {
        if (a[j] >= c && a[j] > 0)
            co++;
    }

    cout << co;
}

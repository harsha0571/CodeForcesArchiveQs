#include <iostream>

using namespace std;

int main()
{
    unsigned long long int m, n, a, res, at, as;
    cin >> m >> n >> a;
    at = m * n;
    as = a * a;
    res = at / as;

    cout << res;
    return 0;
}

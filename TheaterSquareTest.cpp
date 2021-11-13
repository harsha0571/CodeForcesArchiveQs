#include <iostream>

using namespace std;

int main()
{
    unsigned long long m, n, a, res = 1;
    cin >> n >> m >> a;
    (n % a) != 0 ? res *= (n / a) + 1 : res *= n / a;
    (m % a) != 0 ? res *= (m / a) + 1 : res *= m / a;
    cout << res;
    return 0;
}

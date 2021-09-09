#include <iostream>

using namespace std;

int main()
{
    unsigned long long int m, n, a, c, s1, s2;
    cin >> m >> n >> a;
    // only reason this has not been deleted is to remind of how bad my code used to be
    s1 = (m / a) * (n / a);
    s2 = ((m - (m % a)) / a) + ((n - (n % a)) / a);

    if (((m % a) == 0 && (n % a) == 0) && (m > a && n > a))
        c = s1;
    else if (m > a && n == 1)
        c = (m / a);
    else if (n > a && m == 1)
        c = (n / a);
    else if (m < a && n > a)
        c = ((n / a) + 1);
    else if (n < a && m > a)
        c = ((m / a) + 1);
    else if (m < a && n < a)
        c = 1;
    else if (m == a && n < a)
        c = 1;
    else if (n == a && m < a)
        c = 1;
    else if (m == a && n > a)
        c = n / a;
    else if (n == a && m > a)
        c = m / a;
    else if (m % a == 0 && n > a)
        c = s1 + (m / a);
    else if (n % a == 0 && m > a)
        c = s1 + (n / a);
    else if ((m == 1 && n == 1) && a == 1)
        c = 1;
    else if ((m == n) && (n == a))
        c = 1;
    else
        c = s1 + s2 + 1;

    cout << c;
}

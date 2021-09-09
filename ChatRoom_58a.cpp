#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    char in[101];
    cin >> in;

    for (int i = 0; in[i] != '\0'; i++)
    {

        if (c == 0)
        {
            if (in[i] == 'h')
            {
                c++;
                continue;
            }
        }

        if (c == 1)
        {
            if (in[i] == 'e')
            {
                c++;
                continue;
            }
        }

        if (c == 2)
        {
            if (in[i] == 'l')
            {
                c++;
                continue;
            }
        }

        if (c == 3)
        {
            if (in[i] == 'l')
            {
                c++;
                continue;
            }
        }

        if (c == 4)
        {
            if (in[i] == 'o')
            {
                c++;
                break;
            }
        }
    }
    if (c == 5)
        cout << "YES";
    else
        cout << "NO";
}

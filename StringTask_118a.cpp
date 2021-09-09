#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    char in[101]{0}, o[201]{0};
    cin >> in;

    for (int i = 0; i < 101; i++)
    {
        if (in[i] == 'a' || in[i] == 'e' || in[i] == 'i' || in[i] == 'o' || in[i] == 'u' || in[i] == 'y')
            continue;
        else if (in[i] == 'A' || in[i] == 'E' || in[i] == 'I' || in[i] == 'O' || in[i] == 'U' || in[i] == 'Y')
            continue;
        else if (in[i] >= 65 && in[i] <= 90)
        {
            o[c] = 46;
            c++;
            o[c] = in[i] + 32;
            c++;
        }
        else if (in[i] >= 97 && in[i] <= 122)
        {
            o[c] = 46;
            c++;
            o[c] = in[i];
            c++;
        }
    }
    cout << o;
}

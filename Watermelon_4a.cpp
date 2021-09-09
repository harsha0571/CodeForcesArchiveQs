#include <iostream>

using namespace std;

int main()
{
    int w, c;
    cin >> w;

    if (w > 2 && w % 2 == 0)
        cout << "yes";
    else
        cout << "no";
}

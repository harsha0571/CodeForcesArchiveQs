#include <iostream>

using namespace std;

int isLucky(int no)
{
    int check = 0;
    while (no != 0)
    {
        check = no % 10;
        if (!(check == 7 || check == 4))
        {
            return 0;
        }
        no = no / 10;
    }
    return 1;
}
int main()
{
    int num = 0, flag = 0;
    cin >> num;
    if (isLucky(num))
    {
        flag = 1;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (isLucky(i))
            {
                if (num % i == 0)
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
}

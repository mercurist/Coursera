#include <bits/stdc++.h>
using namespace std;
int x, y, z;

int solution_two()
{
    if (z == 0)
        return 0;
    int div = x - y;
    if (div == 0)
    {
        if (z == x)
            return 1;
        else
            return -1;
    }

    bool flag = true;
    int result = INT_MAX;
    int fac = z / (x - y);
    if (z % (x - y) == 0)
    {
        flag = false;
        result = 2 * (z / (x - y));
    }
    for (int i = 0; i <= fac; i++)
    {
        if ((i * (x - y) + x) == z)
        {
            flag = false;
            result = min(result, 2 * i + 1);
        }
    }

    if (flag)
        return -1;
    return result;
}

int main()
{
    cin >> x >> y >> z;
    int temp_one = 0, temp_two = x;
    int count = 0;
    /*
    int t = 1000;
    while (t--)
    {
        // check
        if (temp_one == z)
        {
            cout << 2 * count;
            return 0;
        }
        if (temp_two == z)
        {
            cout << 2 * count + 1;
            return 0;
        }
        // update
        temp_one = temp_two - y;
        temp_two = temp_one + x;
        count++;
    }
    cout << -1;
    */

    cout << solution_two();

    return 0;
}

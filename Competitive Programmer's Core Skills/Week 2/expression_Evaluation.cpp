#include <bits/stdc++.h>
using namespace std;
#define int long long

int findValue(string x, int &index)
{
    index++;
    int res = 0;
    while (x[index] != '+' && x[index] != '-' && index < x.size())
    {

        res = res * 10;
        res += x[index] - '0';
        index++;
    }
    index--;
    return res;
}

int32_t main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    int result = 0;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        if (i == 0)
            result += findValue(x, --i);
        if (x[i] == '+')
        {
            result += findValue(x, i);
            continue;
        }
        if (x[i] == '-')
        {
            result -= findValue(x, i);
            continue;
        }
    }

    cout << result << '\n';
    return 0;
}
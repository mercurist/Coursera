#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int n = x.length();
    bool flag = true;
    for (int i = 0; i < n; i++)
        if (x[i] != '9')
        {
            flag = false;
            break;
        }

    if (flag)
        cout << n + 1;
    else
        cout << n;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int32_t main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int result = r * c;
    int unoccupied = ((r - 1) / 3 + 1) * ((c - 1) / 3 + 1);

    cout << result - unoccupied;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// global variables
int **a;
int n;
vector<int> permutation;
int result = INT_MAX;
int temp_result = 0;
vector<int> final_permutation;

int show_result(const vector<int> &t)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        count += a[t[i] - 1][t[i - 1] - 1];
    }
    return count;
}

void input_array()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void display_current_permutation()
{
    // cout << "checking for ";
    for (int i = 0; i < permutation.size(); i++)
        cout << permutation[i] << " ";
}

void check_permutation(int number)
{
    if (number == 0)
    {
        // display_current_permutation();
        // cout << "result " << show_result(permutation) << '\n';
        if (temp_result < result)
        {
            result = temp_result;
            final_permutation.clear();
            for (int i = 0; i < n; i++)
                final_permutation.push_back(permutation[i]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (find(permutation.begin(), permutation.end(), i) == permutation.end())
        {
            int prev_element;
            if (permutation.size() > 0)
            {
                int na = permutation.size();
                prev_element = permutation[na - 1];
            }
            permutation.push_back(i);
            if (permutation.size() > 1)
            {
                temp_result += a[i - 1][prev_element - 1];
            }
            check_permutation(number - 1);
            if (permutation.size() > 1)
            {
                temp_result -= a[i - 1][prev_element - 1];
            }
            permutation.pop_back();
        }
    }
}

void display_result()
{
    // cout << "displaying the result" << '\n';
    for (int i = 0; i < n; i++)
        cout << final_permutation[i] << " ";
}

int main()
{
    cin >> n;
    a = new int *[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    input_array();
    check_permutation(n);
    display_result();
    // vector<int> temp(n);
    // for (int i = 0; i < n; i++)
    //     cin >> temp[i];
    // cout << show_result(temp);

    return 0;
}
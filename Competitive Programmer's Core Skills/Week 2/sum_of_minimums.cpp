#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

int solution_two(const vector<int> &nums)
{
    stack<pii> content;
    vector<int> left(nums.size());
    vector<int> right(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        int current = 1;
        while (content.empty() == false && content.top().first > nums[i])
        {
            current += content.top().second;
            content.pop();
        }

        content.push(make_pair(nums[i], current));
        left[i] = current;
    }

    stack<pii> content_two;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        int current = 1;
        while (content_two.empty() == false && content_two.top().first >= nums[i])
        {
            current += content_two.top().second;
            content_two.pop();
        }

        content_two.push(make_pair(nums[i], current));
        right[i] = current;
    }

    int answer = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        answer += left[i] * right[i] * nums[i];
    }
    return answer;
}

int32_t main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int n, res = 0;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    res = solution_two(nums);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int minimum = INT_MAX;
    //         for (int k = i; k <= j; k++)
    //         {
    //             minimum = min(minimum, nums[k]);
    //         }
    //         res += minimum;
    //     }
    // }
    cout << res;
    return 0;
}
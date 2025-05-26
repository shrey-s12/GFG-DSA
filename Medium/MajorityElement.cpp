#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr)
{
    int n = arr.size();
    int candidate, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count++;
        }
        else
        {
            if (candidate == arr[i])
                count++;
            else
                count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (candidate == arr[i])
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main()
{
    vector<int> arr = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};

    int ans = majorityElement(arr);

    cout << ans;
    return 0;
}
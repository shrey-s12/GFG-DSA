#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    int n = arr.size();
    int prefix = 0, maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];

        if (prefix > maxSum)
            maxSum = prefix;

        if(prefix < 0)
            prefix = 0;
    }

    return maxSum;
}

int main()
{
    vector<int> arr = {4, -6, 2, 8};

    int result = maxSubarraySum(arr);

    cout << "Largest Subarray Sum : " << result;

    return 0;
}
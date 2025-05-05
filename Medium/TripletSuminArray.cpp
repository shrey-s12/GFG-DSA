#include <bits/stdc++.h>
using namespace std;

bool hasTripletSum(vector<int> &arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        int start = i + 1, end = n-1;
        int remain = target - arr[i], sum = 0;

        while (start < end)
        {
            sum = arr[start] + arr[end];

            if (sum == remain)
                return true;

            if (remain > sum)
                start++;
            else
                end--;
        }
    }

    return false;
}

int main()
{
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int target = 13;

    bool result = hasTripletSum(arr, target);

    cout << "Has Triplet Sum? " << result;

    return 0;
}
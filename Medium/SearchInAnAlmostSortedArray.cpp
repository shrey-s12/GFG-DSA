#include <bits/stdc++.h>
using namespace std;

int findTarget(vector<int> &arr, int target)
{
    int n = arr.size();

    if (n == 1)
        if (arr[n] == target)
            return 0;

    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;
        else if (mid > start && arr[mid - 1] == target)
            return mid - 1;
        else if (mid < end && arr[mid + 1] == target)
            return mid + 1;

        if (arr[mid] >= target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target = 40;

    int index = findTarget(arr, target);

    if (index >= 0)
        cout << target << " Found on index : " << index;
    else
        cout << "Target not Found!";

    return 0;
}
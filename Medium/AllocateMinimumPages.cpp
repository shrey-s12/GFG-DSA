#include <bits/stdc++.h>
using namespace std;

int findPages(int arr[], int n, int k)
{
    int ans = -1, sum = 0, max = 0;

    if (n < k)
    {
        return ans;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        
        sum += arr[i];
    }

    cout << "Sum is " << sum << "\n";
    cout << "Max is " << max << "\n";

    int start = max, end = sum, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int page = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            page += arr[i];

            if (page > mid)
            {
                count++;
                page = arr[i];
            }
        }

        if (count <= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return ans;
}
int main()
{
    int arr[] = {15, 10, 19, 10, 5, 18, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int student = 5;

    int result = findPages(arr, n, student);

    cout << "\nResult is: " << result;

    return 0;
}
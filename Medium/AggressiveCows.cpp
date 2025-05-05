#include <bits/stdc++.h>
using namespace std;

int aggressiveCows(int stalls[], int n, int k)
{
    // sorting
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (stalls[j] < stalls[index])
                index = j;
        }
        swap(stalls[i], stalls[index]);
    }

    int start = 1, end = stalls[n - 1] - stalls[0], mid, ans = 1;

    cout << "Start : " << start << "\n";
    cout << "End : " << end << "\n";

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int count = 1, pos = stalls[0];
        for (int i = 1; i < n; i++)
        {
            if ((pos + mid) <= stalls[i])
            {
                count++;
                pos = stalls[i];
            }
        }

        if (count >= k)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    return ans;
}

int main()
{
    int stalls[] = {7, 13, 11};
    int n = sizeof(stalls) / sizeof(stalls[0]);
    int k = 3;

    int result = aggressiveCows(stalls, n, k);

    cout << "\nResult is: " << result;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int minTime(int arr[], int n, int k)
{
    int ans = -1, sum = 0, max = 0;
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
    int arr[] = {371, 114, 929, 644, 430, 352, 565, 120, 208, 882, 238, 575, 169, 120, 582, 402, 419, 546, 589, 962, 903, 322, 276, 333, 784, 467, 679, 9, 534, 899, 156, 430, 449, 369, 647, 136, 728, 715, 41, 747, 65, 66, 995, 60, 889, 661, 781, 443, 371, 433, 293, 949, 215, 648, 255, 160, 400, 51, 474, 760, 431, 567, 284, 625, 51, 770, 856, 764, 246, 27, 267, 105, 170, 378, 369, 487, 166, 203, 916, 560, 957, 983, 555, 48, 717, 650, 49, 577, 923, 424, 411, 49, 466, 567, 378, 933, 47, 886, 987, 129, 887, 848, 501, 201, 126, 106, 364};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "n = " << n;
    int k = 985;

    int result = minTime(arr, n, k);

    cout << "\nResult is: " << result;

    return 0;
}
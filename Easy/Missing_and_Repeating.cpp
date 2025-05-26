#include <bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 1;
    }

    int d;
    for (int i = 0; i < n; i++)
    {
        d = arr[i] % n;
        arr[d] += n;
    }

    int missing, repeating;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n == 2)
        {
            repeating = i + 1;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n == 0)
        {
            missing = i + 1;
            break;
        }
    }

    return {repeating, missing};
}

int main()
{
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};

    vector<int> ans = findTwoElement(arr);

    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
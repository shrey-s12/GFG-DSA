#include <bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int> &arr)
{
    int n = arr.size();

    int start = 0, end = n - 1;
    while (start <= end)
    {
        if (arr[start] == 0)
            start++;
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
                end--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 0};

    segregate0and1(arr);

    return 0;
}
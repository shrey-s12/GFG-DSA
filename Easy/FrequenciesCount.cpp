#include <bits/stdc++.h>
using namespace std;

vector<int> frequencyCount(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
        arr[i] = arr[i] - 1;

    int d;
    for (int i = 0; i < n; i++)
    {
        d = arr[i] % n;
        arr[d] += n;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / n;
    }

    return arr;
}
int main()
{
    vector<int> arr = {2, 3, 2, 3, 5};

    vector<int> ans = frequencyCount(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
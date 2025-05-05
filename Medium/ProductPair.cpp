#include <bits/stdc++.h>
using namespace std;

bool isProduct(vector<int> arr, long long x)
{
    long long n = arr.size();
    sort(arr.begin(), arr.end());

    long long start = 0, end = n - 1;
    long long prod;
    while (start <= end)
    {
        prod = 1LL * arr[start] * arr[end];
        if (prod == x)
            return true;

        if (prod > x)
            end--;
        else
            start++;
    }

    return false;
}

int main()
{
    vector<int> arr = {-10, 20, 9, -40};
    int x = 300;

    bool result = isProduct(arr, x);

    cout << "The Result : " << result;

    return 0;
}
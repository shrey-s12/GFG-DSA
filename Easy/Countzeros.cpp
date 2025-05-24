#include <bits/stdc++.h>
using namespace std;

int countZeros(vector<vector<int>> A)
{
    int n = A.size();
    int i = 0, j = n - 1;
    int count = 0;

    while (i < n && j >= 0)
    {
        if (A[i][j] == 0)
        {
            count += j + 1;
            i++;
        }
        else
        {
            j--;
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> A = {
        {0, 0, 0},
        {0, 0, 1},
        {0, 1, 1},
    };

    int ans = countZeros(A);

    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    int j = col - 1, max_row_index;

    for (int i = 0; i < row; i++)
    {
        while (j >= 0 && arr[i][j] == 1)
        {
            j--;
            max_row_index = i;
        }
    }
    return max_row_index;
}

int main()
{
    vector<vector<int>> arr = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0},
    };

    int ans = rowWithMax1s(arr);

    cout << ans;
    return 0;
}

// O/P => 2
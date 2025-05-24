#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int x)
{
    int row = mat.size();
    int col = mat[0].size();
    int i = 0, j = col - 1;

    while (i < row && j >= 0)
    {
        if (mat[i][j] == x)
            return true;

        if (mat[i][j] < x)
            i++;
        else
            j--;
    }

    return false;
}

int main()
{
    vector<vector<int>> mat = {
        {4, 8, 15, 25, 60},
        {18, 22, 26, 42, 80},
        {36, 40, 45, 68, 104},
        {48, 50, 72, 83, 130},
        {70, 99, 114, 128, 170},
    };

    int x;
    cout << "Enter the Target Element: ";
    cin >> x;

    bool ans = searchMatrix(mat, x);

    cout << ans;
    return 0;
}
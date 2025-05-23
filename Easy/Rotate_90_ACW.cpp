#include <bits/stdc++.h>
using namespace std;

void Print2DArrayVector(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(vector<vector<int>> &mat)
{
    int n = mat.size();

    // Transpose mat
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Reverse Col
    for (int j = 0; j < n; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(mat[start][j], mat[end][j]);
            start++;
            end--;
        }
    }

    Print2DArrayVector(mat);
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    rotate(mat);
    return 0;
}

// 4 8 12 16
// 3 7 11 15
// 2 6 10 14
// 1 5 9 13
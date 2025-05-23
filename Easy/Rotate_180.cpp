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

void rotateMatrix(vector<vector<int>> &mat)
{
    int n = mat.size();


    // Reverse Row
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(mat[i][start], mat[i][end]);
            start++;
            end--;
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

    rotateMatrix(mat);
    return 0;
}

// 16 15 14 13
// 12 11 10 9
// 8 7 6 5
// 4 3 2 1
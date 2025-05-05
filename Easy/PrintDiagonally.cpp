#include <bits/stdc++.h>
using namespace std;

vector<int> downwardDiagonal(int N, vector<vector<int>> A)
{
    vector<int> ans;
    int row, col;

    for (int j = 0; j < N; j++)
    {
        row = 0, col = j;
        while (col >= 0)
        {
            ans.push_back(A[row][col]);
            row++;
            col--;
        }
    }

    for (int i = 1; i < N; i++)
    {
        row = i, col = N - 1;
        while (row < N)
        {
            ans.push_back(A[row][col]);
            row++;
            col--;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> A = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int N = 4;

    vector<int> ans = downwardDiagonal(N, A);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
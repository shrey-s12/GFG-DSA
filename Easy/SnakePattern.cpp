#include <bits/stdc++.h>
using namespace std;

vector<int> snakePattern(vector<vector<int>> matrix)
{
    int n = matrix.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                ans.push_back(matrix[i][j]);
            }
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {3, 6, 4, 2},
        {7, 8, 11, 5},
        {9, 3, 2, 1},
        {17, 8, 5, 9}};

    vector<int> ans = snakePattern(matrix);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
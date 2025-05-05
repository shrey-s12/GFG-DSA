#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[index])
            {
                index = j;
            }
        }
        swap(A[i], A[index]);
    }

    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int start = j + 1, end = n - 1;
            int remain = X - (A[i] + A[j]), sum = 0;

            while (start < end)
            {
                sum = A[start] + A[end];

                if (sum == remain)
                    return true;

                if (remain > sum)
                    start++;
                else
                    end--;
            }
        }
    }

    return false;
}

int main()
{
    int A[] = {1, 5, 1, 0, 6, 0};
    int X = 7;
    int n = sizeof(A) / sizeof(A[0]);

    bool result = find4Numbers(A, n, X);

    cout << "Has 4 Sum? " << result;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> factorial(int n)
{
    vector<int> ans(1, 1);
    while (n > 1)
    {
        int carry = 0, res, size = ans.size();
        for (int i = 0; i < size; i++)
        {
            res = ans[i] * n + carry;
            carry = res / 10;
            ans[i] = res % 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        n--;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n = 55;

    vector<int> ans = factorial(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}